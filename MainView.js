var Observable = require("FuseJS/Observable");
var Camera = require("FuseJS/Camera");
var CameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require("FuseJS/ImageTools");
var Uploader = require("Uploader");
var GeoLocation = require("FuseJS/GeoLocation");
var FileSystem = require("FuseJS/FileSystem");

var immediateLocation = Observable(JSON.stringify(GeoLocation.location));

var Latitude = Observable(GeoLocation.location.latitude);
var Longitude = Observable(GeoLocation.location.longitude);

var exports = module.exports;

var imagePath = exports.imagePath = Observable();
var imageName = exports.imageName = Observable();
var imageSize = exports.imageSize = Observable();
var imageFile = exports.imageFile = Observable();

var current = exports.current = Observable();
var sel = exports.sel = Observable("1");
var total_emrals = exports.total_emrals = Observable("0001");



var tempImage = "";
var user_info = Observable();



sel.onValueChanged(module, function() {
  current.value = "Selected: " + sel.toArray().join(", ");
  console.log("Selected: " + sel.toArray().join(", "));
});

var path = FileSystem.dataDirectory + "/" + "user_info.json";


file_exists = FileSystem.exists(path)
  .then(function(x) {
    if (x) {
      user_info.replaceAll(JSON.parse(FileSystem.readTextFromFileSync(path)));
    } else {
      // FileSystem.writeTextToFileSync(path, JSON.stringify(responseObject));
      // user_info.replaceAll(JSON.parse(FileSystem.readTextFromFileSync(path)));
    }

  }, function(error) {});

exports.takePicture = function() {
  Camera.takePicture().then(
    function(image) {
      var args = {
        desiredWidth: 320,
        desiredHeight: 320,
        mode: ImageTools.SCALE_AND_CROP,
        performInPlace: true
      };
      ImageTools.resize(image, args).then(
        function(image) {
          console.log('takePicture')
          router.goto("camera");
          CameraRoll.publishImage(image);
          imageFile.value = image;
          tempImage = image;
          displayImage(image);
        }
      ).catch(
        function(reason) {
          console.log("Couldn't resize image: " + reason);
        }
      );
    }
  ).catch(
    function(reason) {
      console.log("Couldn't take picture: " + reason);
    }
  );
};

var lastImage = "";

var displayImage = function(image) {
  console.log('displayImage')
  imagePath.value = image.path;
  imageName.value = image.name;
  imageSize.value = image.width + "x" + image.height;
  ImageTools.getImageFromBase64(image).then(
    function(b64) {
      lastImage = b64;
      imageFile.value = b64
    }
  );
}

exports.selectImage = function() {
  CameraRoll.getImage().then(
    function(image) {
      console.log("received image: " + image.path + ", " + image.width + "/" + image.height);
      displayImage(image);
    }
  ).catch(
    function(reason) {
      console.log("Couldn't get image: " + reason);
    }
  );
};

function formEncode(obj) {
  var str = [];
  for (var p in obj)
    str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
  return str.join("&");
}

exports.uploadAlert = function uploadAlert(e) {


  if (tempImage) {
    Uploader.send(tempImage.path, 'https://emrals-staging.herokuapp.com/upload_image/').then(function(response) {
      console.log("upload complete.");
      console.log(JSON.stringify(response));
      console.log(Longitude.value);
      GeoLocation.getLocation(2000).then(function(location) {
          //timeoutLocation.value = JSON.stringify(location);


          var requestObject = {
            creator: "https://emrals-staging.herokuapp.com/api/users/271/",
            type: "https://emrals-staging.herokuapp.com/api/types/" + sel.value.toString() + "/",
            title: "replace-title-5",
            slug: "replace-slug-5",
            longitude: parseFloat(location.longitude),
            latitude: parseFloat(location.latitude),
            filename: tempImage.name,
            emrals: total_emrals.value,
            views: "1"
          };


          url = 'https://emrals-staging.herokuapp.com/api/alerts/';
          fetch(url, {
            method: 'POST',
            headers: {
              "Content-type": "application/x-www-form-urlencoded"
            },
            body: formEncode(requestObject)
          }).then(function(response) {
            status = response.status;
            response_ok = response.ok;
            return response;
          }).then(function(responseObject) {
            console.log(JSON.stringify(responseObject));
          }).catch(function(err) {
            console.log("Fetch error: " + err);
          });

      }).catch(function(fail) {
          console.log("getLocation fail " + fail);
      });

    });
  }
};



var Environment = require('FuseJS/Environment');

if (Environment.ios) {

  api_url = "https://emrals.herokuapp.com/api/"
}

if (Environment.android) {

  api_url = "https://emrals.herokuapp.com/api/"
}

// if(Environment.preview)    console.log("Running in preview mode");
// if(Environment.mobile)     console.log("Running on iOS or Android");

if (Environment.desktop)
  if (Environment.android) {

    api_url = "https://emrals-staging.herokuapp.com/api/"
  }
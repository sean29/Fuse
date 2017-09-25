var Observable = require("FuseJS/Observable");
var Camera = require("FuseJS/Camera");
var CameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require("FuseJS/ImageTools");

var exports = module.exports;

var imagePath = exports.imagePath = Observable();
var imageName = exports.imageName = Observable();
var imageSize = exports.imageSize = Observable();
var imageFile = exports.imageFile = Observable();


exports.takePicture = function()
{
  Camera.takePicture().then(
    function(image) {
      var args = { desiredWidth:320, desiredHeight:320, mode:ImageTools.SCALE_AND_CROP, performInPlace:true };
      ImageTools.resize(image, args).then(
        function(image) {
          console.log('takePicture')

          CameraRoll.publishImage(image);
          router.goto("camera"); 
          displayImage(image);
        }
      ).catch(
        function(reason) {
          console.log("Couldn't resize image: " + reason);
        }
      );
    }
  ).catch(
    function(reason){
      console.log("Couldn't take picture: " + reason);
    }
  );
};

var lastImage = "";

var displayImage = function(image)
{
  console.log('displayImage')
  imagePath.value = image.path;
  imageName.value = image.name;
  imageSize.value = image.width+"x"+image.height;
  ImageTools.getImageFromBase64(image).then(
    function(b64)
    {
      lastImage = b64;
      imageFile.value = b64
    }
  );
}

exports.selectImage = function()
{
  CameraRoll.getImage().then(
    function(image)
    {
      console.log("received image: "+image.path+", "+image.width+"/"+image.height);
      displayImage(image);
    }
  ).catch(
    function(reason){
      console.log("Couldn't get image: "+reason);
    }
  );
};

function formEncode(obj) {
    var str = [];
    for (var p in obj)
        str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
    return str.join("&");
}

exports.uploadAlert =  function uploadAlert(e) {

        //var imageData = Uno.IO.File.ReadAllBytes(imagePath);
        console.log(imageFile)

        var requestObject = { 
          creator: "https://emrals-staging.herokuapp.com/api/users/271/", 
          type: "https://emrals-staging.herokuapp.com/api/types/1/",
          image: ImageTools.getImageFromBase64(lastImage),
          title: "test upload", 
          slug: "trash-upload",
          views: "1" };
         // get gps

        //url = 'http://127.0.0.1:8000/api/login/';
        url = 'https://emrals-staging.herokuapp.com/api/alerts/';
        fetch(url, {
            method: 'POST',
            headers: { "Content-type": "application/x-www-form-urlencoded" },
            body: formEncode(requestObject)
        }).then(function(response) {
            status = response.status;
            response_ok = response.ok;
            return response.json();
        }).then(function(responseObject) {

          console.log(JSON.stringify(responseObject));



        }).catch(function(err) {

            console.log("Fetch error: " + err);
        });

    };



var Environment = require('FuseJS/Environment');

if(Environment.ios){

    api_url = "https://emrals.herokuapp.com/api/"
}        

if(Environment.android){

    api_url = "https://emrals.herokuapp.com/api/"
}

// if(Environment.preview)    console.log("Running in preview mode");
// if(Environment.mobile)     console.log("Running on iOS or Android");

if(Environment.desktop)if(Environment.android){

    api_url = "https://emrals-staging.herokuapp.com/api/"
}




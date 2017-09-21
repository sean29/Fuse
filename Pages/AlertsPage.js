var Observable = require("FuseJS/Observable");
var Camera = require("FuseJS/Camera");
var CameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require("FuseJS/ImageTools");



function goToCamera() {
	router.goto("camera");
}

function goToAlert(arg) {
	var alert = arg.data;
	router.push("alertdetail", alert);
}


var data = Observable();
//var url = 'http://www.emrals.com/api/alerts/?format=json';
var url = 'http://emrals-staging.herokuapp.com/api/alerts/?format=json';
//var url = 'http://127.0.0.1:8000/api/alerts/?format=json';

fetch(url)
	.then(function(response) { return response.json(); })
	.then(function(responseObject) { data.replaceAll(responseObject.results); });



module.exports = {
	data: data,
	goToCamera: goToCamera,
	goToAlert: goToAlert
};

var exports = module.exports;

//  These observables will be used to display an image and its information

var imagePath = exports.imagePath = Observable();
var imageName = exports.imageName = Observable();
var imageSize = exports.imageSize = Observable();

exports.takePicture = function()
{
  Camera.takePicture().then(
    function(image) {
      var args = { desiredWidth:320, desiredHeight:320, mode:ImageTools.SCALE_AND_CROP, performInPlace:true };
      ImageTools.resize(image, args).then(
        function(image) {
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
//  When we receive an image object we want to display, we call this
var displayImage = function(image)
{
  imagePath.value = image.path;
  imageName.value = image.name;
  imageSize.value = image.width+"x"+image.height;
  ImageTools.getImageFromBase64(image).then(
    function(b64)
    {
      lastImage = b64;
    }
  );
}

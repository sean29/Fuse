var Observable = require("FuseJS/Observable");
var Camera = require("FuseJS/Camera");
var CameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require("FuseJS/ImageTools");

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
//  When we receive an image object we want to display, we call this
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
    }
  );
}

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




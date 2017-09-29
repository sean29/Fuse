var Observable = require("FuseJS/Observable");
var Camera = require("FuseJS/Camera");
var CameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require("FuseJS/ImageTools");

var alert = this.Parameter;
var emrals = alert.map(function(x) { return x.emrals; });


var exports = module.exports;

exports.back = function back() {
  router.goto("alerts");
}
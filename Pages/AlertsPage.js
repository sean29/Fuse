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
var url = 'https://emrals-staging.herokuapp.com/api/alerts/?format=json';
//var url = 'http://127.0.0.1:8000/api/alerts/?format=json';

fetch(url)
    .then(function(response) {
        return response.json();
    })
    .then(function(responseObject) {
        data.replaceAll(responseObject.results);
        isBusy.deactivate();
    });

function back() {
    router.goBack();
}

isBusy.activate();

function endLoading() {
    isLoading.value = false;
}

function reloadHandler() {
    isLoading.value = true;
    //setTimeout(endLoading, 3000);
    fetch(url)
    .then(function(response) {
        return response.json();
    })
    .then(function(responseObject) {
        data.replaceAll(responseObject.results);
        endLoading();
    });
    
}

var isLoading = Observable(false);

module.exports = {
    isLoading: isLoading,
    reloadHandler: reloadHandler,
    data: data,
    goToCamera: goToCamera,
    goToAlert: goToAlert,
    back: back
};
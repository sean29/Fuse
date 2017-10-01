var Observable = require("FuseJS/Observable");
var Camera = require("FuseJS/Camera");
var CameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require("FuseJS/ImageTools");
var isLoading = Observable(false);
var data = Observable();
var show_message = Observable("Hidden");

var fade_out = Observable("False");

var temp_alert = this.Parameter;

var poster_username = temp_alert.map(function(x) { return x.poster_username; });
var id = temp_alert.map(function(x) { return x.id; });

function fademessage() {
    fade_out.value="True";
}


this.onParameterChanged(function(temp_alert) {
    if (temp_alert.poster_username){
        show_message.value = "Visible";
        setTimeout(fademessage, 3000);
    }
});


function goToCamera() {
    router.goto("camera");
}

function goToAlert(arg) {
    var alert = arg.data;
    router.push("alertdetail", alert);
}

var url = api_url+'alerts/?format=json';

function reloadHandler() {
    if(!isBusy){
    isLoading.value = true;
    }
    fetch(url)
    .then(function(response) {
        return response.json();
    })
    .then(function(responseObject) {
        isLoading.value = false;
        data.replaceAll(responseObject.results);
        isBusy.deactivate();
        endLoading();

    });
}

reloadHandler();

function back() {
    router.goto('splash');
}

isBusy.activate();

module.exports = {
    fade_out: fade_out, 
    poster_username: poster_username,
    id: id,
    show_message: show_message,
    isLoading: isLoading,
    reloadHandler: reloadHandler,
    data: data,
    goToCamera: goToCamera,
    goToAlert: goToAlert,
    back: back
};
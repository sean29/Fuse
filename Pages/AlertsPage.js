var Observable = require("FuseJS/Observable");
var Camera = require("FuseJS/Camera");
var CameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require("FuseJS/ImageTools");
var GeoLocation = require("FuseJS/GeoLocation");

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


function goToAlert(arg) {
    var alert = arg.data;
    router.push("alertdetail", alert);
}


function reloadHandler() {

    try{

    if(!isBusy){
    isLoading.value = true;
    }

    }catch(err) {

}
    fetch(api_url+'alerts/?format=json')
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


try{
isBusy.activate();
}catch(err) {

}


module.exports = {
    fade_out: fade_out, 
    poster_username: poster_username,
    id: id,
    show_message: show_message,
    isLoading: isLoading,
    reloadHandler: reloadHandler,
    data: data,
    goToAlert: goToAlert

};
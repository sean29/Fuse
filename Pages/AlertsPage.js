var Observable = require("FuseJS/Observable");


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


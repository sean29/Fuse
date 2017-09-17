var Observable = require("FuseJS/Observable");


var data = Observable();
//var url = 'http://www.emrals.com/api/alerts/?format=json';
var url = 'http://emrals-staging.herokuapp.com/api/alerts/?format=json';

fetch(url)
	.then(function(response) { return response.json(); })
	.then(function(responseObject) { data.replaceAll(responseObject.results); });

module.exports = {
	data: data
};


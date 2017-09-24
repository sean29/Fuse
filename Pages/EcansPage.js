var Observable = require("FuseJS/Observable");


function back() {
  router.goBack();
}

function goToBuyEcan() {
	router.push('buyecan');
}



var data = Observable();
//var url = 'http://www.emrals.com/api/alerts/?format=json';
var url = 'https://emrals-staging.herokuapp.com/api/ecans/?format=json';

fetch(url)
	.then(function(response) { return response.json(); })
	.then(function(responseObject) { data.replaceAll(responseObject); });

module.exports = {
	data: data,
	back: back,
	goToBuyEcan: goToBuyEcan
};


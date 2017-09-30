var InterApp = require("FuseJS/InterApp");
var Observable = require("FuseJS/Observable");
var Environment = require('FuseJS/Environment');

var alert = this.Parameter;

var image = alert.map(function(x) { return x.image; });
var thumbnail = alert.map(function(x) { return x.thumbnail; });
var name = alert.map(function(x) { return x.name; });
var title = alert.map(function(x) { return x.title; });
var id = alert.map(function(x) { return x.id; });
var emrals = alert.map(function(x) { return x.emrals; });
var poster_username = alert.map(function(x) { return x.poster_username; });
var views = alert.map(function(x) { return x.views; });
var created_naturaltime = alert.map(function(x) { return x.created_naturaltime; });
var google_url = alert.map(function(x) { return x.google_url; });
var longitude = alert.map(function(x) {  return x.longitude; });
var latitude = alert.map(function(x) { return x.latitude; });


function back() {
	alert.value = alert.value;
	router.goBack();
}

function load_map(args){
	if (Environment.android) { 
		url = "geo:0,0?q=" + args.data.latitude.value.toString() + "," + args.data.longitude.value.toString();
		InterApp.launchUri(url);
	}
	if (Environment.ios) { 
		url = "maps://?q=" + args.data.latitude.value.toString() + "," + args.data.longitude.value.toString();
		InterApp.launchUri(url);
	}
}

module.exports = {
	longitude: longitude,
	latitude: latitude,
	load_map: load_map,
	thumbnail: thumbnail,
	name: name,
	title: title,
	back: back,
	id: id,
	emrals: emrals,
	poster_username: poster_username,
	views: views,
	created_naturaltime: created_naturaltime,
	google_url: google_url
};

var InterApp = require("FuseJS/InterApp");
var Observable = require("FuseJS/Observable");
var Environment = require('FuseJS/Environment');

module.exports.thumbnail = this.Parameter.map(function(x) { return x.thumbnail; });
module.exports.name = this.Parameter.map(function(x) { return x.name; });
module.exports.title = this.Parameter.map(function(x) { return x.title; });
module.exports.id = this.Parameter.map(function(x) { return x.id; });
module.exports.emrals = this.Parameter.map(function(x) { return x.emrals; });
module.exports.poster_username = this.Parameter.map(function(x) { return x.poster_username; });
module.exports.views = this.Parameter.map(function(x) { return x.views; });
module.exports.created_naturaltime = this.Parameter.map(function(x) { return x.created_naturaltime; });
module.exports.google_url = this.Parameter.map(function(x) { return x.google_url; });


module.exports.load_map = function(args){
	if (Environment.android) { 
		url = "geo:0,0?q=" + args.data.latitude.value.toString() + "," + args.data.longitude.value.toString();
		InterApp.launchUri(url);
	}
	if (Environment.ios) { 
		url = "maps://?q=" + args.data.latitude.value.toString() + "," + args.data.longitude.value.toString();
		InterApp.launchUri(url);
	}
}
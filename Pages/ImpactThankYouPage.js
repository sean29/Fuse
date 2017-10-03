var Observable = require("FuseJS/Observable");

var param = this.Parameter;
var zipcode = param.map(function(x) { return x.zipcode; });
var subscription = param.map(function(x) { return x.subscription; });
var email = param.map(function(x) { return x.email; });

module.exports = {
	zipcode: zipcode,
	email: email,
	subscription: subscription
};
var Observable = require("FuseJS/Observable");

var param = this.Parameter;
var email = param.map(function(x) { return x.email; });

module.exports = {
	email: email,
	goToEcans: function goToEcans() { router.push("ecans"); },
	goToAlerts: function goToAlerts() { router.push("alerts"); },
	goToImpact: function goToImpact() { router.push("impact"); }
};
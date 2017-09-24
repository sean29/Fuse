var Environment = require('FuseJS/Environment');

if(Environment.ios)        console.log("Running on iOS");
if(Environment.android)    console.log("Running on Android");
if(Environment.preview)    console.log("Running in preview mode");
if(Environment.mobile)     console.log("Running on iOS or Android");
if(Environment.desktop)    console.log("Running on desktop");


module.exports = {
	Environment: Environment,
	goToEcans: function goToEcans() { router.push("ecans"); },
	goToAlerts: function goToAlerts() { router.push("alerts"); },
	goToLogin: function goToLogin() { router.push("login"); },
	goToImpact: function goToImpact() { router.push("impact"); }

};
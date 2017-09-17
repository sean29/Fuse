function goToAlerts() {
	router.goto("alerts");
}

function goToEcans() {
	router.goto("ecans");
}

module.exports = {
	goToEcans: goToEcans,
	goToAlerts: goToAlerts
};
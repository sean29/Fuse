var Observable = require("FuseJS/Observable");
var zipcode = Observable("");
var GeoLocation = require("FuseJS/GeoLocation");
var global_latitude = exports.global_latitude = Observable();
var global_longitude = exports.global_longitude = Observable();

function extractFromAdress(components, type){
    for (var i=0; i<components.length; i++)
        for (var j=0; j<components[i].types.length; j++)
            if (components[i].types[j]==type) return components[i].long_name;
    return "";
}
function extractzip(){
GeoLocation.getLocation(8000).then(function(location) {
	var latlng = location.latitude + "," + location.longitude;
	var url = "http://maps.googleapis.com/maps/api/geocode/json?latlng=" + latlng;

	fetch(url)
		.then(function(response) {
			return response.json();
		}).then(function(responseObject) {
			console.log(JSON.stringify(responseObject.results[0]));
			zipcode.value = extractFromAdress(responseObject.results[0].address_components, "postal_code");

			
		}).catch(function(err) {
			console.log("Fetch error: " + err);
		});
}).catch(function(err) {
	console.log("Fetch error: " + err);
});
}
extractzip();

function goToPayment10() {
  router.push("payment", { subscription: "10", zipcode: zipcode.value});
}

function goToPayment25() {
  router.push("payment", { subscription: "25" , zipcode: zipcode.value});
}

function goToPayment50() {
  router.push("payment", { subscription: "50" , zipcode: zipcode.value});
}

module.exports = {
	extractzip: extractzip,
  goToPayment10: goToPayment10,
  goToPayment25: goToPayment25,
  goToPayment50: goToPayment50, 
  zipcode: zipcode,
};
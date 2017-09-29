var Observable = require("FuseJS/Observable");

var exports = module.exports;

var cardNumber = exports.cardNumber = Observable("");
var expiryMonth = exports.expiryMonth = Observable("");
var expiryYear = exports.expiryYear = Observable("");
var cvc = exports.cvc = Observable('');

var qty = exports.qty = Observable("01");
var price = exports.price = Observable("1,000");

var name = exports.name = Observable("");
var address = exports.address = Observable("");
var city = exports.city = Observable("");
var state = exports.state = Observable("");
var zipcode = exports.zipcode = Observable("");
var email = exports.email = Observable("");

var error_visibility = exports.error_visibility = Observable("Hidden");
var error = exports.error = Observable("");

function numberWithCommas(x) {
	return x.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");
}

qty.onValueChanged(module, function(x) {
	console.log('changed');
	price.value = numberWithCommas(parseInt(x) * 1000);
});


function formEncode(obj) {
	var str = [];
	for (var p in obj)
		str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
	return str.join("&");
}


exports.hideError = function hideError() {
	error_visibility.value = "Hidden";
	error.value = "";
}

exports.testPay = function testPay() {
	var cardParams = {
		"card[number]": cardNumber.value,
		"card[exp_month]": expiryMonth.value,
		"card[exp_year]": expiryYear.value,
		"card[cvc]": cvc.value
	};
	console.log(JSON.stringify(cardParams));

	url = 'https://api.stripe.com/v1/tokens';

	fetch(url, {
		method: 'POST',
		headers: {
			"Content-type": "application/x-www-form-urlencoded",
			'Authorization': 'Bearer ' + STRIPE_PRIVATE_KEY
		},
		body: formEncode(cardParams)
	}).then(function(response) {
		return response.json();
	}).then(function(responseObject) {
		console.log(JSON.stringify(responseObject));
		if (responseObject.object == 'token') {
			if (parseInt(qty.value) > 1) {
				plural = "s";
			} else {
				plural = "";
			}

			var requestObject = {
				source: responseObject.id,
				amount: parseInt(price.value.replace(/\,/g, '') + "00", 10),
				currency: "USD",
				description: qty.value + " Emrals Ecan" + plural,
				receipt_email: email.value,
				"shipping[name]": name.value,
				"shipping[address][line1]": address.value,
				"shipping[address][city]": city.value,
				"shipping[address][country]": "USA",
				"shipping[address][postal_code]": zipcode.value,
				"shipping[address][state]": state.value,
				"metadata[email]": email.value
			};
			console.log(JSON.stringify(requestObject));

			url = 'https://api.stripe.com/v1/charges';

			fetch(url, {
				method: 'POST',
				headers: {
					"Content-type": "application/x-www-form-urlencoded",
					'Authorization': 'Bearer ' + STRIPE_PRIVATE_KEY
				},
				body: formEncode(requestObject)
			}).then(function(response) {
				return response.json();
			}).then(function(responseObject) {
				console.log(JSON.stringify(responseObject));

				if (responseObject.captured == true) {
					router.goto("ecanthanks");

				} else {
					console.log("Error: " + JSON.stringify(responseObject));
					error.value = "Error: " + JSON.stringify(responseObject);
					error_visibility.value = "Visible";
				}

			}).catch(function(err) {
				console.log("Error: " + err);
				error.value = "Error: " + err
				error_visibility.value = "Visible";
			});

		}
		if (responseObject.error) {
			console.log("Error: " + responseObject.error.message);
			error.value = "Error: " + responseObject.error.message
			error_visibility.value = "Visible";
		}


	}).catch(function(err) {
		console.log("Error: " + err);
		error.value = "Error: " + err
		error_visibility.value = "Visible";
	});

};

exports.back = function back() {
	router.goBack();
}
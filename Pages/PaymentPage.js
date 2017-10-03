var Observable = require("FuseJS/Observable");

var cardNumber = Observable("");
var expiryMonth = Observable("");
var expiryYear = Observable("");
var cvc = Observable("");
var name = Observable("");
var email = Observable("");
var error = Observable("");

var param = this.Parameter;
var zipcode = param.map(function(x) {
	return x.zipcode;
});

var subscription = param.map(function(x) {
	return x.subscription;
});

var error_visibility = Observable("Hidden");

function formEncode(obj) {
	var str = [];
	for (var p in obj)
		str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
	return str.join("&");
}

function hideError() {
	error_visibility.value = "Hidden";
	error.value = "";
}

testPay = function testPay() {
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
			var requestObject = {
				source: responseObject.id,
				description: "Customer for " + email.value,
				email: email.value
			};
			console.log(JSON.stringify(requestObject));

			url = 'https://api.stripe.com/v1/customers';

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
				if (responseObject.created) {
					var requestObject = {
						customer: responseObject.id,
						"items[0][plan]": subscription.value
					};
					console.log(JSON.stringify(requestObject));

					url = 'https://api.stripe.com/v1/subscriptions';

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

						if (responseObject.created) {
							router.push("impactthanks", {
								subscription: subscription.value,
								zipcode: zipcode.value,
								email: email.value
							});
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


module.exports = {
	subscription: subscription,
	testPay: testPay,
	cardNumber: cardNumber,
	expiryMonth: expiryMonth,
	expiryYear: expiryYear,
	cvc: cvc,
	back: back,
	hideError: hideError,
	zipcode: zipcode,
	name: name,
	email: email,
	error: error,
	error_visibility: error_visibility
};
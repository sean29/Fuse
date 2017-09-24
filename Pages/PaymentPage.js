var Observable = require("FuseJS/Observable");
var Stripe = require("Stripe");

var cardNumber = Observable("4242424242424242");
var expiryMonth = Observable("12");
var expiryYear = Observable("20");
var cvc = Observable("123");
var subscription = Observable("");

var email = Observable("test@example.com");

var param = this.Parameter;

this.onParameterChanged(function(param) { 
	subscription = JSON.stringify(param);
	console.log(subscription);
	
});



function back() {
  router.goBack();
}

var info = Observable("");

var testPay = function() {
	console.log("createToken");

	var cardParams = {
		"number": cardNumber.value,
		"exp_month": expiryMonth.value,
		"exp_year": expiryYear.value,
		"cvc": cvc.value
	};

	Stripe.createToken(cardParams).then(function(token) {
		var json_info = JSON.stringify(token);
		info.value = json_info;
		console.log("testPay worked!\n" + json_info);
    console.log(subscription);





	var requestObject = {
		source: stripe_token.value,
		amount: "100000",
		currency: "USD",
		description: "Emrals Ecan"
	};

	url = 'https://api.stripe.com/v1/charges';

	fetch(url, {
		method: 'POST',
		headers: {
			"Content-type": "application/x-www-form-urlencoded",
			'Authorization': 'Bearer ' + "sk_test"
		}, 
		body: formEncode(requestObject)
	}).then(function(response) {
		status = response.status;
		response_ok = response.ok;
		return response.json();

	}).then(function(responseObject) {

		if (responseObject.status == 'succeeded') {
			message = "Thank you, Payment Sent!"
			//console.log(JSON.stringify(responseObject));
		}

	}).catch(function(err) {

		console.log("Fetch error: " + err);
	});








	}).catch(function(e) {
		console.log("testPay failed:" + e);
		info.value = "Creating Token Failed:\n" + e;
	});
};

var validateCardParams = function() {
	console.log("validateCardParams");

	var cardParams = {
		"number": cardNumber.value,
		"exp_month": expiryMonth.value,
		"exp_year": expiryYear.value,
		"cvc": cvc.value
	};

	Stripe.validateCard(cardParams).then(function(result) {
		var json_info = JSON.stringify(result);
		info.value = json_info;
		console.log("validateCardParams worked!\n" + json_info);
	}).catch(function(e) {
		console.log("validateCardParams failed:" + e);
		info.value = "Validate Failed:\n" + e;
	});
};

module.exports = {
	subscription: subscription,
	back: back,
	validateCardParams: validateCardParams,
	testPay: testPay,
	info: info,
	cardNumber: cardNumber,
	expiryMonth: expiryMonth,
	expiryYear: expiryYear,
	cvc: cvc
};
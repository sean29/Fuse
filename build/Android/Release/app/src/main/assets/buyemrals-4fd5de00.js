var Observable = require("FuseJS/Observable");
var buy_emrals = this.Parameter;

var emrals = buy_emrals.map(function(x) { return x.emrals; });
var id = buy_emrals.map(function(x) { return x.id; });
var dollar_value = buy_emrals.map(function(x) { return x.dollar_value; });

console.log('we are here');

this.onParameterChanged(function(buy_emrals) {
    console.log(buy_emrals.emrals);
});


var error_visibility = Observable("Hidden");
var error = Observable("");

function hideError() {
    error_visibility.value = "Hidden";
    error.value = "";
}




module.exports = {
    emrals: emrals, 
    hideError: hideError,
    error_visibility: error_visibility,
    id: id,
    dollar_value: dollar_value,
    error: error,
};

var exports = module.exports;

var cardNumber = exports.cardNumber = Observable("");
var expiryMonth = exports.expiryMonth = Observable("");
var expiryYear = exports.expiryYear = Observable("");
var cvc = exports.cvc = Observable('');

var username = exports.name = Observable("");
var email = exports.email = Observable("");


function formEncode(obj) {
    var str = [];
    for (var p in obj)
        str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
    return str.join("&");
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

            var requestObject = {
                source: responseObject.id,
                amount: parseInt(emrals.value),
                currency: "USD",
                description: "Add Emrals to #" + id.value,
                receipt_email: email.value,
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
                    router.goto("emralsthanks");
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


function back() {
	router.goBack();
	console.log('back');
}

var Observable = require("FuseJS/Observable");

var password = Observable("");
var username = Observable("");
var email = Observable("");
var first_name = Observable("");
var last_name = Observable("");
var error = Observable("");

function back() {
  router.goBack();
}



module.exports = {

	back: back
};


function formEncode(obj) {
    var str = [];
    for (var p in obj)
        str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
    return str.join("&");
}

module.exports = {
    password: password,
    username: username,
    email: email,
    last_name: last_name,
    first_name: first_name,
    error: error,
    back: back,
    doSignup: function doSignup(e) {
        var requestObject = { 
        	username: username.value, 
        	password: password.value,
        	email: email.value,
        	first_name: first_name.value,
        	last_name: last_name.value 
        };
        //url = 'http://127.0.0.1:8000/api/signup/';
        url = 'https://emrals-staging.herokuapp.com/api/signup/';
        fetch(url, {
            method: 'POST',
            headers: { "Content-type": "application/x-www-form-urlencoded" },
            body: formEncode(requestObject)
        }).then(function(response) {
            status = response.status;
            response_ok = response.ok;
            return response.json();
        }).then(function(responseObject) {

            if (responseObject) {
                if (responseObject.token) {
                    console.log(responseObject.token);
                    router.goto("splash");

                } else {
                    error.value = responseObject.error;
                }
            }

        }).catch(function(err) {

            console.log("Fetch error: " + err);
        });

    }
};

var Observable = require("FuseJS/Observable");

var password = Observable("");
var username = Observable("");
var error = Observable("");

function goToSignup() {
    router.goto("signup");
}


function formEncode(obj) {
    var str = [];
    for (var p in obj)
        str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
    return str.join("&");
}

module.exports = {
    goToSignup: goToSignup,
    password: password,
    username: username,
    error: error,
    doLogin: function doLogin(e) {
        var requestObject = { username: username.value, password: password.value };
        //url = 'http://127.0.0.1:8000/api/login/';
        url = 'https://emrals-staging.herokuapp.com/api/login/';
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
var Observable = require("FuseJS/Observable");
var FileSystem = require("FuseJS/FileSystem");

var password = Observable("");
var username = Observable("");
var error = Observable("");

function goToSignup() {
    router.push("signup");
}

function back() {
    router.goBack();
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
    back: back,
    doLogin: function doLogin(e) {
        var requestObject = {
            username: username.value,
            password: password.value
        };

        fetch(api_url + 'login/', {
            method: 'POST',
            headers: {
                "Content-type": "application/x-www-form-urlencoded"
            },
            body: formEncode(requestObject)
        }).then(function(response) {
            return response.json();
        }).then(function(responseObject) {
            console.log(JSON.stringify(responseObject))

            if (responseObject) {
                if (responseObject.token) {

                    FileSystem.writeTextToFileSync(path, JSON.stringify(responseObject));

                    user_info_object = JSON.parse(FileSystem.readTextFromFileSync(path));
                    user_avatar.value = user_info_object.picture;
                    user_emrals.value = user_info_object.emrals;
                    user_name.value = user_info_object.username;
                    user_id.value = user_info_object.id;
                    user_xp.value = user_info_object.xp;
                    widget_visible.value = "Visible";
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
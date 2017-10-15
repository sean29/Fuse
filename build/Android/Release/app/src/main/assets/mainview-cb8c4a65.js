function catch_error(err) {
    console.log(err);
    payload = {
        "access_token": "POST_SERVER_ITEM_ACCESS_TOKEN",
        "data": {
            "environment": "mobile",
            "body": {
                "message": {
                    "body": err
                }
            }
        }
    }

    fetch('https://api.rollbar.com/api/1/item/', {
        method: 'POST',
        headers: {
            "Content-type": "application/json",
        },
        body: JSON.stringify(payload)
    }).then(function(response) {
        return response;
    }).then(function(responseObject) {
        console.log(JSON.stringify(responseObject));
    }).catch(function(err) {
        console.log("Fetch error: " + err);
    });
}


try {
    var Observable = require("FuseJS/Observable");
    var Camera = require("FuseJS/Camera");
    var CameraRoll = require("FuseJS/CameraRoll");
    var ImageTools = require("FuseJS/ImageTools");
    var Uploader = require("Uploader");
    var Device = require('Device');
    var GeoLocation = require("FuseJS/GeoLocation");
    var FileSystem = require("FuseJS/FileSystem");

    var exports = module.exports;

    exports.build_num = Observable("BUDDYBUILD_BUILD_NUMBER");
    exports.version_num = Observable("APP_VERSION");

    var emrals_popup_visibility = exports.emrals_popup_visibility = Observable("Hidden");


    widget_visible = exports.widget_visible = Observable();
    login_visible = exports.login_visible = Observable();


    GeoLocation.getLocation(10000).then(function(location) {
        var latlng = location.latitude + "," + location.longitude;
        var slack_webhook = "https://hooks.slack.com/services/slack_key";
        payload = {
            "text": "model: " + Device.model +
                " UUID: " + Device.getUUID() +
                " locale: " + Device.locale +
                " vendor: " + Device.vendor +
                " system: " + Device.system +
                " systemVersion: " + Device.systemVersion +
                " SDKVersion: " + Device.SDKVersion +
                " cores: " + Device.cores +
                " isRetina: " + Device.isRetina +
                " Build: " + "BUDDYBUILD_BUILD_NUMBER" +
                " latitude: " + location.latitude +
                " longitude: " + location.longitude
        }

        fetch(slack_webhook, {
            method: 'POST',
            headers: {
                "Content-type": "application/json",
            },
            body: JSON.stringify(payload)
        }).then(function(response) {
            return response;
        }).then(function(responseObject) {

        });

    });




    var sidebarOpen = exports.sidebarOpen = Observable(false);

    exports.setSidebarOpen = function setSidebarOpen() {
        sidebarOpen.value = true;
    };
    exports.setSidebarClosed = function setSidebarClosed() {
        sidebarOpen.value = false;
    };


    var imagePath = exports.imagePath = Observable();
    var imageName = exports.imageName = Observable();
    var imageSize = exports.imageSize = Observable();
    var imageFile = exports.imageFile = Observable();

    user_avatar = exports.user_avatar = Observable();
    user_emrals = exports.user_emrals = Observable();
    user_username = exports.user_username = Observable();
    user_id = exports.user_id = Observable();
    user_name = exports.user_name = Observable();
    user_xp = exports.user_xp = Observable();

    var loading_visible = exports.loading_visible = Observable(false);
    var current = exports.current = Observable();
    var sel = exports.sel = Observable("1");
    var total_emrals = exports.total_emrals = Observable("0001");

    exports.add_emrals_1 = function(args) {
        total_emrals.value = "101";
        emrals_popup_visibility.value = "Hidden";
    }

    exports.add_emrals_5 = function(args) {
        total_emrals.value = "501";
        emrals_popup_visibility.value = "Hidden";
    }

    exports.add_emrals_10 = function(args) {
        total_emrals.value = "1001";
        emrals_popup_visibility.value = "Hidden";
    }


    exports.detail_add_emrals_1 = function(args) {
        emrals_popup_visibility.value = "Hidden";
        if (user_emrals.value < 100) {
            if (user_name.value) {
                router.push("buyemrals", {
                    emrals: 100,
                    id: args.data.id.value,
                    dollar_value: 1
                });
            } else {
                router.push("login");
            }
        } else {
            user_emrals.value = user_emrals.value - 100;
            emrals.value = emrals.value + 100

            //add contributuion
            //update users account on server
            //refresh dirt alert locally
            // go to add emrals thanks page

        }

    }
    exports.detail_add_emrals_5 = function(args) {
        total_emrals.value = total_emrals.value + "500";
        emrals_popup_visibility.value = "Hidden";
        if (user_emrals.value < 500) {
            if (user_name.value) {
                router.push("buyemrals");
            } else {
                router.push("login");
            }
        }
    }
    exports.detail_add_emrals_10 = function(args) {
        total_emrals.value = total_emrals.value + "1000";
        emrals_popup_visibility.value = "Hidden";
        if (user_emrals.value < 1000) {
            if (user_name.value) {
                router.push("buyemrals");
            } else {
                router.push("login");
            }
        }
    }

    STRIPE_PRIVATE_KEY = "pk_test";
    emrals_url = "https://emrals.herokuapp.com/"
    api_url = emrals_url + "api/"

    var tempImage = "";
    user_info = Observable();


    sel.onValueChanged(module, function() {
        current.value = "Selected: " + sel.toArray().join(", ");
    });

    path = FileSystem.dataDirectory + "/" + "user_info.json";


    file_exists = FileSystem.exists(path)
        .then(function(x) {
            if (x) {
                widget_visible.value = "Visible";
                login_visible.value = "Hidden";
                user_info_object = JSON.parse(FileSystem.readTextFromFileSync(path));
                user_avatar.value = user_info_object.picture;
                user_emrals.value = user_info_object.emrals;
                user_name.value = user_info_object.username;
                user_id.value = user_info_object.id;
                user_xp.value = user_info_object.xp;
                user_info.replaceAll(JSON.parse(FileSystem.readTextFromFileSync(path)));
            } else {
                user_avatar.value = emrals_url + "static/images/user_avatar.png";
                user_emrals.value = 1;
                user_xp.value = 1;
                user_name.value = "Login"
                widget_visible.value = "Collapsed";
                login_visible.value = "Visible";
            }

        }, function(error) {});

    var currentPage = exports.currentPage = Observable("alerts");

    exports.back = function() {
        router.goBack();
    }
    exports.goHome = function() {
        router.push('splash');
    }
    exports.goToEcans = function() {
        router.push("ecans");
    }
    exports.goToAlerts = function(args) {
        router.push("alerts");
    }
    exports.goToLogin = function() {
        router.push("login");
    }
    exports.goToImpact = function() {
        router.push("impact");
    }
    exports.goToMap = function() {
        router.push("maps");
    }
    exports.goToBuyEcan = function() {
        router.push('buyecan');
    }
    exports.goToNewsItems = function() {
        router.push('newsitems');
    }
    exports.goToSignup = function() {
        router.push("signup");
    }
    exports.goToCamera = function() {
        router.push("camera");
    }
    exports.goToBarcode = function() {
        router.push("barcode");
    }
    exports.viewProfile = function() {
        router.push('profile');
    };

    exports.doLogout = function() {
        FileSystem.delete(path);
        widget_visible.value = "Collapsed";
        login_visible.value = "Visible";
        router.goto("alerts");
    };



    exports.takePicture = function() {
        Camera.takePicture().then(
            function(image) {
                var args = {
                    desiredWidth: 320,
                    desiredHeight: 320,
                    mode: ImageTools.SCALE_AND_CROP,
                    performInPlace: true
                };
                ImageTools.resize(image, args).then(
                    function(image) {
                        loading_visible.value = false;
                        router.goto("camera");
                        CameraRoll.publishImage(image);
                        imageFile.value = image;
                        tempImage = image;
                        displayImage(image);
                    }
                ).catch(
                    function(reason) {
                        console.log("Couldn't resize image: " + reason);
                    }
                );
            }
        ).catch(
            function(reason) {
                if (reason == "Camera unsupported on current platform") {
                    router.goto("camera");
                }
                console.log("Couldn't take picture: " + reason);
            }
        );
    };

    exports.takePictureSolution = function(inputs) {
        console.log(JSON.stringify(inputs.data));
        Camera.takePicture().then(
            function(image) {
                var args = {
                    desiredWidth: 320,
                    desiredHeight: 320,
                    mode: ImageTools.SCALE_AND_CROP,
                    performInPlace: true
                };
                ImageTools.resize(image, args).then(
                    function(image) {
                        loading_visible.value = false;
                        router.goto("solution", {
                            id: inputs.data.id.value,
                            emrals: inputs.data.emrals.value
                        });
                        CameraRoll.publishImage(image);
                        imageFile.value = image;
                        tempImage = image;
                        displayImage(image);
                    }
                ).catch(
                    function(reason) {
                        console.log("Couldn't resize image: " + reason);
                    }
                );
            }
        ).catch(
            function(reason) {
                console.log("Couldn't take picture: " + reason);
            }
        );
    };






    var lastImage = "";

    var displayImage = function(image) {
        imagePath.value = image.path;
        imageName.value = image.name;
        imageSize.value = image.width + "x" + image.height;
        ImageTools.getImageFromBase64(image).then(
            function(b64) {
                lastImage = b64;
                imageFile.value = b64
            }
        );
    }

    exports.selectImage = function() {
        CameraRoll.getImage().then(
            function(image) {
                var args = {
                    desiredWidth: 320,
                    desiredHeight: 320,
                    mode: ImageTools.SCALE_AND_CROP,
                    performInPlace: true
                };
                ImageTools.resize(image, args).then(
                    function(image) {
                        loading_visible.value = false;
                        router.goto("camera");
                        CameraRoll.publishImage(image);
                        imageFile.value = image;
                        tempImage = image;
                        displayImage(image);
                    }
                ).catch(
                    function(reason) {
                        console.log("Couldn't resize image: " + reason);
                    }
                );
            }
        ).catch(
            function(reason) {
                console.log("Couldn't get image: " + reason);
            }
        );
    };

    function formEncode(obj) {
        var str = [];
        for (var p in obj)
            str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
        return str.join("&");
    }

    function slugify(text) {

        return text.toString().toLowerCase()
            .replace(/\s+/g, '-') // Replace spaces with -
            .replace(/&/g, '-and-') // Replace & with 'and'
            .replace(/[^\w\-]+/g, '') // Remove all non-word chars
            .replace(/\-\-+/g, '-') // Replace multiple - with single -
            .replace(/^-+/, '') // Trim - from start of text
            .replace(/-+$/, '') // Trim - from end of text
    }

    exports.endLoading = function endLoading() {
        isLoading.value = false;
    }

    exports.uploadAlert = function uploadAlert(e) {


        if (tempImage) {
            loading_visible.value = true;
            Uploader.send(tempImage.path, emrals_url + 'upload_image/').then(function(response) {
                GeoLocation.getLocation(10000).then(function(location) {
                    var latlng = location.latitude + "," + location.longitude;
                    var url = "http://maps.googleapis.com/maps/api/geocode/json?latlng=" + latlng;
                    address = "";
                    alert_type = "";

                    switch (parseInt(sel.value)) {
                        case 1:
                            alert_type = "Trash";
                            break;
                        case 2:
                            alert_type = "Poop";
                            break;
                        case 3:
                            alert_type = "Derelict Bike";
                            break;
                        case 4:
                            alert_type = "Dirty drain";
                            break;
                        case 5:
                            alert_type = "Dirty tree";
                    }


                    fetch(url)
                        .then(function(response) {
                            return response.json();
                        }).then(function(responseObject) {

                            address = responseObject.results[0].formatted_address.toString();
                            if (!user_id.value) {
                                user_id.value = 1;
                                user_username.value = "Anonymous";
                            }

                            var requestObject = {
                                creator: api_url + "users/" + user_id.value.toString() + "/",
                                type: api_url + "types/" + sel.value.toString() + "/",
                                title: alert_type + " near " + address,
                                slug: slugify(alert_type + " near " + address).substring(0, 49),
                                longitude: parseFloat(location.longitude),
                                latitude: parseFloat(location.latitude),
                                filename: tempImage.name,
                                emrals: total_emrals.value,
                                views: "1"
                            };
                            console.log(JSON.stringify(requestObject));

                            fetch(api_url + 'alerts/', {
                                method: 'POST',
                                headers: {
                                    "Content-type": "application/x-www-form-urlencoded"
                                },
                                body: formEncode(requestObject)
                            }).then(function(response) {
                                return response.json();
                            }).then(function(responseObject) {
                                console.log(JSON.stringify(responseObject));
                                if (responseObject.id) {
                                    router.push("alerts", {
                                        poster_username: responseObject.poster_username,
                                        id: responseObject.id
                                    });
                                }

                            }).catch(function(err) {
                                console.log("Fetch error: " + err);
                            });

                        }).catch(function(err) {
                            console.log("Fetch error: " + err);
                        });

                }).catch(function(fail) {
                    console.log("getLocation fail " + fail);
                });

            });
        } else {
            Camera.takePicture().then(
                function(image) {
                    var args = {
                        desiredWidth: 320,
                        desiredHeight: 320,
                        mode: ImageTools.SCALE_AND_CROP,
                        performInPlace: true
                    };
                    ImageTools.resize(image, args).then(
                        function(image) {
                            router.goto("camera");

                            CameraRoll.publishImage(image);
                            imageFile.value = image;
                            tempImage = image;
                            displayImage(image);
                        }
                    ).catch(
                        function(reason) {
                            console.log("Couldn't resize image: " + reason);
                        }
                    );
                }
            ).catch(
                function(reason) {
                    console.log("Couldn't take picture: " + reason);
                }
            );
        }
    };



    exports.uploadSolution = function uploadSolution(e) {


        if (tempImage) {
            loading_visible.value = true;
            Uploader.send(tempImage.path, emrals_url + 'upload_image/').then(function(response) {
                GeoLocation.getLocation(10000).then(function(location) {
                    console.log(JSON.stringify(e.data));
                    console.log(JSON.stringify(e.data.id.value));

                    if (!user_id.value) {
                        user_id.value = 1;
                        user_username.value = "Anonymous";
                    }

                    var requestObject = {
                        user: api_url + "users/" + user_id.value.toString() + "/",
                        alert: api_url + "alerts/" + e.data.id.value.toString() + "/",
                        longitude: parseFloat(location.longitude),
                        latitude: parseFloat(location.latitude),
                        filename: tempImage.name,
                        comment: "posted solution"
                    };
                    console.log(JSON.stringify(requestObject));

                    fetch(api_url + 'solutions/', {
                        method: 'POST',
                        headers: {
                            "Content-type": "application/x-www-form-urlencoded"
                        },
                        body: formEncode(requestObject)
                    }).then(function(response) {
                        return response.json();
                    }).then(function(responseObject) {
                        console.log(JSON.stringify(responseObject));
                        if (responseObject.id) {
                            router.push("alerts", {
                                poster_username: responseObject.poster_username,
                                solution: true,
                                id: responseObject.id
                            });
                        }

                    }).catch(function(err) {
                        console.log("Fetch error: " + err);
                    });

                }).catch(function(err) {
                    console.log("Fetch error: " + err);
                });


            });
        } else {
            Camera.takePicture().then(
                function(image) {
                    var args = {
                        desiredWidth: 320,
                        desiredHeight: 320,
                        mode: ImageTools.SCALE_AND_CROP,
                        performInPlace: true
                    };
                    ImageTools.resize(image, args).then(
                        function(image) {
                            router.goto("solution");

                            CameraRoll.publishImage(image);
                            imageFile.value = image;
                            tempImage = image;
                            displayImage(image);
                        }
                    ).catch(
                        function(reason) {
                            console.log("Couldn't resize image: " + reason);
                        }
                    );
                }
            ).catch(
                function(reason) {
                    console.log("Couldn't take picture: " + reason);
                }
            );
        }
    };

} catch (err) {
    catch_error(err);
}
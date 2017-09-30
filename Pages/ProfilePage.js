var Observable = require("FuseJS/Observable");
var FileSystem = require("FuseJS/FileSystem");

function back() {
    router.goBack();
}


module.exports = {
	back: back,
	doLogout: function doLogout() { 
		FileSystem.delete(path);
      widget_visible.value = "Collapsed";
      login_visible.value = "Visible";
		router.goto("splash"); 
    },


};
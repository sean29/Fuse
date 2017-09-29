var Observable = require("FuseJS/Observable");

function back() {
  router.goBack();
}

function goToBuyEcan() {
	router.push('buyecan');
}

module.exports = {
	back: back,
	goToBuyEcan: goToBuyEcan
};


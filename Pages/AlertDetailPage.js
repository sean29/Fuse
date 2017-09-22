var alert = this.Parameter;

var image = alert.map(function(x) { return x.image; });
var thumbnail = alert.map(function(x) { return x.thumbnail; });
var name = alert.map(function(x) { return x.name; });
var title = alert.map(function(x) { return x.title; });


function back() {
	alert.value = alert.value;
	router.goBack();
}

module.exports = {
	image: image,
	thumbnail: thumbnail,
	name: name,
	title: title,
	back: back
};
var alert = this.Parameter;

var emrals = alert.map(function(x) { return x.emrals; });
var id = alert.map(function(x) { return x.id; });

function back() {
    router.goBack();
}


module.exports = {
	id: id,
	emrals: emrals,
    back: back
};



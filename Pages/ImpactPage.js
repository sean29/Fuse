var Observable = require("FuseJS/Observable");
var zipcode = Observable("");

function goToPayment10() {
  router.push("payment", { subscription: "10", zipcode: zipcode.value});
}

function goToPayment25() {
  router.push("payment", { subscription: "25" , zipcode: zipcode.value});
}

function goToPayment50() {
  router.push("payment", { subscription: "50" , zipcode: zipcode.value});
}

module.exports = {
  goToPayment10: goToPayment10,
  goToPayment25: goToPayment25,
  goToPayment50: goToPayment50, 
  zipcode: zipcode,
};
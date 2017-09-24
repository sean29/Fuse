var Observable = require("FuseJS/Observable");
var RMStore = require("RMStore");


function back() {
  router.goBack();
}


function goToPayment10() {
  router.push("payment", { subscripition: "10" });
}

function goToPayment25() {
  router.push("payment", { subscripition: "25" });
}

function goToPayment50() {
  router.push("payment", { subscripition: "50" });
}

module.exports = {
  back: back,
  goToPayment10: goToPayment10,
  goToPayment25: goToPayment25,
  goToPayment50: goToPayment50, 
};

module.exports.requestProducts = function() {
  console.log("- start request products -");
  RMStore.requestProducts(["testsubscription0"]).then(function(result) {
      console.log("Product request succeeded:");
      console.log(JSON.stringify(result));
  }).catch(function(e) {
      console.log("Product request failed");
  });
};

module.exports.addPayment = function() {
  console.log("- start add payment -");
  RMStore.addPayment("testsubscription0").then(function(result) {
      console.log("add payment succeeded:");
      console.log(JSON.stringify(result));
  }).catch(function(e) {
      console.log("add payment failed");
  });
};

module.exports.restoreTransactions = function() {
  console.log("- start add payment -");
  RMStore.restoreTransactions().then(function(result) {
      console.log("restoring transactions succeeded:");
      console.log(JSON.stringify(result));
  }).catch(function(e) {
      console.log("restoring transactions failed");
  });
};

module.exports.refreshReceipt = function() {
  console.log("- start refresh receipt -");
  RMStore.refreshReceipt().then(function() {
      console.log("refreshing receipt succeeded");
  }).catch(function(e) {
      console.log("refreshing receipt failed");
  });
};

module.exports.canMakePayments = function() {
  console.log("- Can make payments? = " + RMStore.canMakePayments);
};

module.exports.getReceiptTransactions = function() {
  console.log("- Receipt transactions -");
  console.log(JSON.stringify(RMStore.getReceiptTransactions()));
};

module.exports.getEncryptedReceiptAsBase64 = function() {
  console.log("- Encrypted Receipt As Base64 -");
  console.log(RMStore.getEncryptedReceiptAsBase64());
};
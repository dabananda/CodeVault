var arr1 = readline().split(" ").map(x => parseFloat(x));
var arr2 = readline().split(" ").map(x => parseFloat(x));
var unit1 = arr1[1];
var price1 = arr1[2];
var unit2 = arr2[1];
var price2 = arr2[2];
var res1 = unit1 * price1
var res2 = unit2 * price2
var totalRes = res1 + res2
console.log("VALOR A PAGAR: R$ " + totalRes.toFixed(2))
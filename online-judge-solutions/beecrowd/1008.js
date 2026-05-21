var number = parseInt(readline())
var hours = parseInt(readline())
var payPerHour = parseFloat(readline())
var res = hours * payPerHour
console.log("NUMBER = " + number)
console.log("SALARY = U$ " + res.toFixed(2))
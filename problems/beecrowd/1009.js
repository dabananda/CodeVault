var name = readline()
var salary = parseFloat(readline())
var totalSell = parseFloat(readline())
var bonus = 0.15 * totalSell
var totalSalary = salary + bonus
console.log("TOTAL = R$ " + totalSalary.toFixed(2))
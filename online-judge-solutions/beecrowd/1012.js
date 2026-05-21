var arr = readline().split(" ").map(x => parseFloat(x))
var a = arr[0]
var b = arr[1]
var c = arr[2]
console.log("TRIANGULO: " + (0.5 * a * c).toFixed(3))
console.log("CIRCULO: " + (3.14159 * c * c).toFixed(3))
console.log("TRAPEZIO: " + ((a + b) / 2 * c).toFixed(3))
console.log("QUADRADO: " + (b * b).toFixed(3))
console.log("RETANGULO: " + (a * b).toFixed(3))
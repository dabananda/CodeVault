var arr = readline().split(" ").map(x => parseInt(x))
var max = arr[0]
for (var i = 0; i < 3; i++) {
    if (arr[i] > max) {
        max = arr[i]
    }
}
console.log(max + " eh o maior")
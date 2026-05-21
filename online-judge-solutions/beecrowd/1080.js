var arr = []
for (var j = 0; j < 100; j++) {
    arr[j] = parseInt(readline())
}
var max = arr[0]
var pos
for (var i = 0; i < 100; i++) {
    if (arr[i] > max) {
        max = arr[i]
        pos = i + 1
    }
}
console.log(max + "\n" + pos)
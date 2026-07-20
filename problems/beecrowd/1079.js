var t = parseInt(readline())
for (var testCase = 0; testCase < t; testCase++) {
    var arr = readline().split(" ").map(x => parseFloat(x))
    console.log((((arr[0] * 2) + (arr[1] * 3) + (arr[2] * 5)) / 10).toFixed(1))
}
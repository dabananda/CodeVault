int missingNumber(int n, vector<int> &arr){
   int xr = 0;
    for (int i = 0; i < n; i++) {
        // xor of two same number cancels each other. ex, 2 ^ 2 = 0
        // so if example is: 2 ^ 2 ^ 1 = 1 which is the answer
        xr = xr ^ arr[i];
    }
    return xr;
}
int lb(vector < int > arr, int x) {
    int l = 0, h = arr.size() - 1;
    int ind = -1;
    while (l <= h) {
        int m = l + (h - l) / 2;
        if (arr[m] == x) {
            h = m - 1;
            ind = m;
        } else if (x > arr[m]) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    return ind;
}

int ub(vector < int > arr, int x) {
    int l = 0, h = arr.size() - 1;
    int ind = -1;
    while (l <= h) {
        int m = l + (h - l) / 2;
        if (arr[m] == x) {
            l = m + 1;
            ind = m;
        } else if (arr[m] < x) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    return ind;
}

int countOccurrences(vector < int > arr, int x) {
    // Write your code here.
    int firstOc = lb(arr, x);
    if (firstOc == -1) {
        return 0;
    }
    int lastOc = ub(arr, x);
    return (lastOc - firstOc + 1);
}
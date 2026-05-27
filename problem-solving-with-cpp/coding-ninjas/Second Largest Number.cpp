vector<int> getSecondOrderElements(int n, vector<int> a) {
    int l = a[0], s = a[0], sl = -1;
    for (int i = 1; i < n; i++) {
        l = max(l, a[i]);
        s = min(s, a[i]);
    }
    int ss = l;
    for (int i = 0; i < n; i++) {
        if (a[i] > sl && a[i] < l) {
            sl = a[i];
        }
        if (a[i] < ss && a[i] > s) {
            ss = a[i];
        }
    }
    return {sl, ss};

}

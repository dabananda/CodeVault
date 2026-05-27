int flipBits(int A, int B){
    int n = A ^ B;
    int cnt = 0;
    for (int i = 0; i <= 31; i++) {
        if (n & (1 << i)) {
            cnt++;
        }
    }
    return cnt;
}
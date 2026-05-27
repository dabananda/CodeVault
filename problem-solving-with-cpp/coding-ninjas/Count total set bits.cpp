int countSetBits(int N) {
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    int n = i;
    while (n > 1) {
      cnt = cnt + (n & 1);
      n = n >> 1;
    }
    if (n == 1) {
      cnt++;
    }
  }
  return cnt;
}
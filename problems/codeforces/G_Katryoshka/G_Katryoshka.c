#include <stdio.h>

int main() {
  long long int e, m, b, ans = 0, min;
  scanf("%lld %lld %lld", &e, &m, &b);
  if (e <= m && e <= b) min = e;
  else if (m <= e && m <= b) min = m;
  else min = b;
  ans = ans + min, e = e - min, m = m = min, b = b - min;
  if (e == 0 || m == 0 || b == 0) {
    printf("%lld\n", ans);
  } else {
    e = e / 2, b;
    long long int x;
    if (e <= b) x = e;
    else x = b;
    printf("%lld\n", ans + x);
  }

  return 0;
}
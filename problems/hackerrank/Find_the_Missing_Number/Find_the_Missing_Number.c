#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long int r;
    int a, b, c;
    scanf("%lld %d %d %d", &r, &a, &b, &c);
    long long int x = a * b * c;
    if (r % x != 0) {
      printf("-1\n");
    } else {
      long long int y = r / x;
      printf("%lld\n", y);
    }
  }

  return 0;
}

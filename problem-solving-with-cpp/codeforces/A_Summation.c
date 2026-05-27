#include <stdio.h>

int main() {
  long long int n, sum = 0;
  scanf("%lld", &n);
  for (int i = 0; i < n; i++) {
    long long int x;
    scanf("%lld", &x);
    sum = sum + x;
  }
  if (sum < 0) {
    printf("%lld\n", sum * -1);
  } else {
    printf("%lld\n", sum);
  }
  return 0;
}
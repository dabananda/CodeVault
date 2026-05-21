#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  long long int n;
  scanf("%lld", &n);
  if (n % 3 == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}

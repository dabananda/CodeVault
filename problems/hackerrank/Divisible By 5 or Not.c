#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    if (i % 5 == 0) {
      printf("%d Yes\n", i);
    } else {
      printf("%d No\n", i);
    }
  }

  return 0;
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int pos = 0, neg = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (x > 0) {
      pos = pos + x;
    } else {
      neg = neg + x;
    }
  }
  printf("%d %d\n", pos, neg);

  return 0;
}

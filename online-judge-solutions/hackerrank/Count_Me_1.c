#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, cnt2 = 0, cnt3 = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if ((x % 2 == 0 && x % 3 == 0) || x % 2 == 0) {
      cnt2++;
    } else if (x % 3 == 0) {
      cnt3++;
    }
  }
  printf("%d %d\n", cnt2, cnt3);

  return 0;
}

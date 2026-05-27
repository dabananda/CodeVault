#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int d2 = (m1 * d) / (m1 + m2);
    printf("%d\n", d - d2);
  }

  return 0;
}

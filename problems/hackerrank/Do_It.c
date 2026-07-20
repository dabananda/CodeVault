#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= k; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}

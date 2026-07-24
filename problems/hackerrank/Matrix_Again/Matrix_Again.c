#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = n - 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", a[i][j]);
    }
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = m - 1; j < m; j++) {
      printf("%d ", a[i][j]);
    }
  }

  return 0;
}
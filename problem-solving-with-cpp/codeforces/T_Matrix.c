#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  int m[n][n];
  int sumPD = 0, sumSD = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &m[i][j]);
      if (i == j) {
        sumPD += m[i][j];
      }
      if (i + j == n - 1) {
        sumSD += m[i][j];
      }
    }
  }
  printf("%d\n", abs(sumPD - sumSD));
  
  return 0;
}
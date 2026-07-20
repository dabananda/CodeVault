#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int k = (n + 10) / 2;
  for (int i = 1; i <= n + 10; i = i + 2) {
    for (int j = 1; j <= k; j++) {
      printf(" ");
    }
    k--;
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= n + 10; j++) {
      if (j <= 5 || j > n + 5) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}

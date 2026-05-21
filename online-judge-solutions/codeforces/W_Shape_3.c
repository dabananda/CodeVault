#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int k = 0;
  for (int i = 1; i <= n; i++) {
    // printing spaces
    for (int a = 1; a <= n - i; a++) {
      printf(" ");
    }
    // printing stars
    for (int j = 1; j <= i + k; j++) {
      printf("*");
    }
    k++;
    printf("\n");
  }
  k = 1;
  for (int i = 0; i < n; i++) {
    // printing spaces
    for (int a = 0; a < i; a++) {
      printf(" ");
    }
    // printing stars
    for (int j = 1; j <= 2 * n - k - i; j++) {
      printf("*");
    }
    k++;
    printf("\n");
  }

  return 0;
}
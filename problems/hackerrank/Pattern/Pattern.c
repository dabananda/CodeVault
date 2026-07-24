#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (int j = 1, k = 0; j <= i + k && j <= 2 * i - 1; j++, k++) {
      if (i % 2 == 1) {
        printf("#");

      } else {
        printf("-");
      }
    }
    printf("\n");
  }
  for (int i = n - 1; i > 0; i--) {
    for (int j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (int j = 1, k = 0; j <= i + k && j <= 2 * i - 1; j++, k++) {
      if (i % 2 == 1) {
        printf("#");

      } else {
        printf("-");
      }
    }
    printf("\n");
  }

  return 0;
}
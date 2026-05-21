#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (x > 0) {
      nums[i] = 1;
    } else if (x < 0) {
      nums[i] = 2;
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", nums[i]);
  }

  return 0;
}
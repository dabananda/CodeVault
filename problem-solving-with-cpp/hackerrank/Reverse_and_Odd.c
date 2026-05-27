#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    if (i % 2 == 1) {
      printf("%d ", nums[i]);
    }
  }

  return 0;
}

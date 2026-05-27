#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  int min = nums[0], position = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] < min) {
      min = nums[i];
      position = i;
    }
  }
  printf("%d %d\n", min, position + 1);

  return 0;
}
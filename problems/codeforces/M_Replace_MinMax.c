#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }

  int minVal = nums[0], maxVal = nums[0];
  int minIn = 0, maxIn = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] < minVal) {
      minVal = nums[i];
      minIn = i;
    }
    if (nums[i] > maxVal) {
      maxVal = nums[i];
      maxIn = i;
    }
  }

  int temp = nums[minIn];
  nums[minIn] = nums[maxIn];
  nums[maxIn] = temp;

  for (int i = 0; i < n; i++) {
    printf("%d ", nums[i]);
  }
  
  return 0;
}
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  for (int i = 0; i < n; i++) {
    if (nums[i] <= 10) {
      printf("A[%d] = %d\n", i, nums[i]);
    }
  }
  
  return 0;
}
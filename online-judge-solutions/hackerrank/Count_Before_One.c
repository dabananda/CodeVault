#include <stdio.h>

int count_before_one(int nums[], int n) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] == 1) {
      break;
    } else {
      ans++;
    }
  }
  return ans;
}

int main() {
  int n;
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  int ans = count_before_one(nums, n);
  printf("%d\n", ans);

  return 0;
}
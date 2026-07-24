#include <stdio.h>

long long int print(int nums[], int n) {
  if (n < 0) {
    return 0;
  }
  return nums[n] + print(nums, n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  long long int sum = print(nums, n - 1);
  printf("%lld\n", sum);

  return 0;
}
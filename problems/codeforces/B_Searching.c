#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  int x;
  scanf("%d", &x);
  int flag = -1;
  for (int i = 0; i < n; i++) {
    if (nums[i] == x) {
      printf("%d\n", i);
      flag = 1;
      break;
    }
  }
  if (flag == -1) {
    printf("-1\n");
  }
  return 0;
}
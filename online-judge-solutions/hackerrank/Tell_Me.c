#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
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
        flag = 1;
        break;
      }
    }
    if (flag == 1) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}

#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (b <= a) {
    printf("%d\n", a - b);
  } else {
    printf("0\n");
  }
  return 0;
}
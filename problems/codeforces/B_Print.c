#include <stdio.h>

void print(int a) {
  int i;
  for (i = 1; i < a; i++) {
    printf("%d ", i);
  }
  printf("%d\n", i);
}

int main() {
  int n;
  scanf("%d", &n);
  print(n);

  return 0;
}
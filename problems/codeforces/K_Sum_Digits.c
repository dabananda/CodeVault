#include <stdio.h>

int main() {
  int n, sum = 0;
  scanf("%d", &n);
  getchar();
  for (int i = 0; i < n; i++) {
    char ch;
    scanf("%c", &ch);
    sum = sum + (ch - '0');
  }
  printf("%d\n", sum);

  return 0;
}
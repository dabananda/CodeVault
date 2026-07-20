#include <stdio.h>
#include <string.h>

int main() {
  char c[1000001];
  gets(c);
  int sum = 0;
  for (int i = 0; i < strlen(c); i++) {
    sum = sum + (c[i] - '0');
  }
  printf("%d\n", sum);
  
  return 0;
}
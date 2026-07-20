#include <stdio.h>
#include <string.h>

int main() {
  char a[11], b[11];
  scanf("%s %s", a, b);

  int lenA = strlen(a), lenB = strlen(b);
  
  char c[21];
  int i = 0;
  while (a[i] != '\0') {
    c[i] = a[i];
    i++;
  }
  int j = 0;
  while (b[j] != '\0') {
    c[i] = b[j];
    i++, j++;
  }
  c[i] = '\0';

  char temp = a[0];
  a[0] = b[0];
  b[0] = temp;

  printf("%d %d\n", lenA, lenB);
  printf("%s\n", c);
  printf("%s %s\n", a, b);

  return 0;
}
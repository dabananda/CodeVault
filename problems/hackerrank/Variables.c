#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a;
  long long int b;
  float c;
  char d;

  scanf("%d", &a);
  scanf("%lld", &b);
  scanf("%f", &c);
  scanf(" %c", &d);  // add and extra space befor %c to get char input at new line

  printf("%d\n", a);
  printf("%lld\n", b);
  printf("%0.2f\n", c);
  printf("%c\n", d);

  return 0;
}

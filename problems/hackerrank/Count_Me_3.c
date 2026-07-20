#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    char s[10001];
    scanf("%s", s);
    int len = strlen(s);
    int upper = 0, lower = 0, digits = 0;
    for (int i = 0; i < len; i++) {
      if (s[i] >= '0' && s[i] <= '9') {
        digits++;
      } else if (s[i] >= 'a' && s[i] <= 'z') {
        lower++;
      } else {
        upper++;
      }
    }
    printf("%d %d %d\n", upper, lower, digits);
  }
  return 0;
}

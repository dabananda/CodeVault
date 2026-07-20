#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[100001];
  scanf("%s", s);
  int len = strlen(s);
  int cnt = 0;
  for (int i = 0; i < len; i++) {
    if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
      cnt++;
    }
  }
  printf("%d\n", cnt);

  return 0;
}

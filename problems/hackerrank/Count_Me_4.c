#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[10001];
  scanf("%s", s);
  int cnt[26] = {0};
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    cnt[s[i] - 97]++;
  }
  for (int i = 0; i < 26; i++) {
    if (cnt[i] > 0) {
      printf("%c - %d\n", i + 97, cnt[i]);
    }
  }
  return 0;
}

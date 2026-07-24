#include <stdio.h>
#include <string.h>

int main() {
  char ch[100001];
  scanf("%s", ch);
  int n = strlen(ch);
  char s[n + 1];
  for (int i = 0; i < n; i++) {
    if (ch[i] == ',') {
      s[i] = ' ';
    } else if (ch[i] >= 'A' && ch[i] <= 'Z') {
      s[i] = ch[i] + 32;
    } else if (ch[i] >= 'a' && ch[i] <= 'z') {
      s[i] = ch[i] - 32;
    }
  }
  s[n] = '\0';
  printf("%s\n", s);

  return 0;
}
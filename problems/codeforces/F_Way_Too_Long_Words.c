#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    char ch[1000001];
    scanf("%s", ch);
    int n = strlen(ch);
    if (n > 10) {
      printf("%c%d%c\n", ch[0], n - 2, ch[n - 1]);
    } else {
      printf("%s\n", ch);
    }
  }

  return 0;
}
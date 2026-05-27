#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
  char ch[1001];
  scanf("%s", ch);
  int l = 0, h = strlen(ch) - 1;
  bool flag = true;
  while (l < h) {
    if (ch[l] != ch[h]) {
      flag = false;
      break;
    }
    l++, h--;
  }
  if (flag == true) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  
  return 0;
}
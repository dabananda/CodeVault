#include <stdio.h>

int is_palindrome(char s[]) {
  int flag = 1;
  int l = 0, r = strlen(s) - 1;
  while (l <= r) {
    if (s[l] != s[r]) {
      flag = 0;
    }
    l++, r--;
  }
  return flag;
}

int main() {
  char s[1001];
  scanf("%s", s);
  int ans = is_palindrome(s);
  if (ans == 1) {
    printf("Palindrome\n");
  } else {
    printf("Not Palindrome\n");
  }

  return 0;
}
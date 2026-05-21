#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    char ch[n + 1];
    scanf("%s", ch);
    int p = 0, t = 0;
    for (int i = 0; i < n; i++) {
      if (ch[i] == 'P') {
        p++;
      } else {
        t++;
      }
    }
    if (p == t) {
      printf("Draw\n");
    } else if (p > t) {
      printf("Pathaan\n");
    } else {
      printf("Tiger\n");
    }
  }

  return 0;
}
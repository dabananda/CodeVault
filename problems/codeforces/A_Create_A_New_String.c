#include <stdio.h>
#include <string.h>

int main() {
  char S[10001], T[10001];
  scanf("%s %s", S, T);
  printf("%d %d\n", strlen(S), strlen(T));
  printf("%s %s\n", S, T);

  return 0;
}
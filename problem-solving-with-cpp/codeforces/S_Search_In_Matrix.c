#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int mat[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  int x;
  scanf("%d", &x);
  int flag = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == x) {
        flag = 1;
        break;
      }
    }
  }
  if (flag == 1) {
    printf("will not take number\n");
  } else {
    printf("will take number\n");
  }

  return 0;
}
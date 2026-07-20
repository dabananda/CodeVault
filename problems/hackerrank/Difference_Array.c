#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int b[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (b[j] < b[minIdx]) {
        minIdx = j;
      }
    }
    int temp = b[i];
    b[i] = b[minIdx];
    b[minIdx] = temp;
  }
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      b[i] = a[i];
    }
    sort(b, n);
    for (int i = 0; i < n; i++) {
      c[i] = abs(a[i] - b[i]);
      printf("%d ", c[i]);
    }
    printf("\n");
  }

  return 0;
}
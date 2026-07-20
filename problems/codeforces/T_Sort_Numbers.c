#include <stdio.h>

void sort(int arr[]) {
  for (int i = 0; i < 2; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int arr[3] = {a, b, c};
  sort(arr);
  printf("%d\n%d\n%d\n\n", arr[0], arr[1], arr[2]);
  printf("%d\n%d\n%d\n", a, b, c);

  return 0;
}
#include <stdio.h>

int getMin(int arr[], int n) {
  int ans = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < ans) {
      ans = arr[i];
    }
  }
  return ans;
}

int getMax(int arr[], int n) {
  int ans = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > ans) {
      ans = arr[i];
    }
  }
  return ans;
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int min = getMin(arr, n);
  int max = getMax(arr, n);
  printf("%d %d\n", min, max);

  return 0;
}
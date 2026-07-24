#include <iostream>

using namespace std;

int main() {
  int n, max = 0, sum = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] >= max) {
      max = arr[i];
    }
  }
  for (int i = 0; i < n; i++) {
    sum = sum + (max - arr[i]);
  }
  cout << sum << endl;

  return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++) {
      cin >> arr[j];
    }
    bool flag = true;
    int z = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + z);
    for (int j = 0; j < n - 1; j++) {
      if (arr[j + 1] - arr[j] > 1) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
      int result = 0;
      for (int j = 0; j < n; j++) {
        if (j == i) continue;
        else result ^= arr[j];
      }
      if (arr[i] = result) {
        cout << arr[i] << endl;
        break;
      }
    }
  }

  return 0;
}
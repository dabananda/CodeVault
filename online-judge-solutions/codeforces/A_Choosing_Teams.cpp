#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  vector<int> newArr;
  for (int i= 0; i < n; i++) {
    if (5 - arr[i] >= k) {
      newArr.push_back(arr[i]);
    }
  }
  if (newArr.size() < 3) {
    cout << 0 << endl;
  } else {
    cout << newArr.size() / 3 << endl;
  }

  return 0;
}
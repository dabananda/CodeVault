#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x, count = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
      cin >> x;
      arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] == arr[i + 1]) {
        arr.erase(next(arr.begin()));
        count++;
      }
    }
    if (count % 2 == 1) {
      cout << arr.size() - 1 << endl;
    } else {
      cout << arr.size() << endl;
    }
  }

  return 0;
}
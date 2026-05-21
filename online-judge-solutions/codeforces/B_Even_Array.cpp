#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (i % 2 == 0 && x % 2 != 0) even.push_back(i);
      else if (i % 2 != 0 && x % 2 == 0) odd.push_back(i);
    }
    if (even.size() != odd.size()) cout << -1 << endl;
    else cout << odd.size() << endl;
  }
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
      cin >> x;
      s.insert(x);
    }
    for (auto it = s.begin(); it != s.end(); it++) {
      cout << *it << " ";
    }
    cout << endl;
  }

  return 0;
}
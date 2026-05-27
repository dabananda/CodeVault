#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n;
    int s = 0, e = INT_MAX;
    vector<int> v;
    while (n--) {
      int a, x;
      cin >> a >> x;
      if (a == 1) s = max(x, s);
      else if (a == 2) e = min(x, e);
      else v.push_back(x);
    }
    if (s > e) cout << 0 << endl;
    else {
      int ans = e - s + 1;
      for (auto i: v) {
        if (i >= s && i <= e) ans--;
      }
      cout << ans << endl;
    }
  }
  return 0;
}
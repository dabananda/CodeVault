// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  int x, n, m;
  cin >> x >> n >> m;
  while (x > 0 && n && x / 2 + 10 < x) {
    x = x / 2 + 10;
    n--;
  }
  while (m--) {
    x = x - 10;
  }
  if (x <= 0) cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  TLE;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    Solution();
  }
  return 0;
}
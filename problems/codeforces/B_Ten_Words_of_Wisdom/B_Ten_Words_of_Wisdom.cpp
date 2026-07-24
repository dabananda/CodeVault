// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution(int t) {
  // start coding from here
  int n, max = -1, res;
  cin >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back(make_pair(a, b));
  }
  for (int i = 0; i < n; i++) {
    if (v[i].first <= 10 && v[i].second > max) {
      max = v[i].second;
      res = i + 1;
    }
  }
  cout << res << "\n";
}

int main() {
  TLE;
  int test_case, t = 1;
  cin >> test_case;
  while (test_case--) {
    Solution(t++);
  }

  return 0;
}
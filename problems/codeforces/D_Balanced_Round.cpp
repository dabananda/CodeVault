// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define all(v) v.begin(), v.end()

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  // start coding from here
  int n, k, in;
  cin >> n >> k;
  vi v;
  for (int i = 0; i < n; i++) {
    cin >> in;
    v.push_back(in);
  }
  sort(v.begin(), v.end());
  int cnt = 1, ans = 1;
  for (auto i = 1; i < n; i++) {
    if (v[i] - v[i - 1] > k) {
      cnt = 1;
    } else {
      cnt++;
    }
    ans = max(cnt, ans);
  }
  cout << n - ans << "\n";
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
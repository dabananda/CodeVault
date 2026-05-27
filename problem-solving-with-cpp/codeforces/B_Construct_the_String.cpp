// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  int n, a, b, cnt = 0;
  cin >> n >> a >> b;
  string s;
  for (int i = 97; i < 97 + n; i++) {
    if (cnt == b) cnt = 0;
    s.push_back(char(cnt + 97));
    cnt++;
  }
  cout << s << "\n";
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
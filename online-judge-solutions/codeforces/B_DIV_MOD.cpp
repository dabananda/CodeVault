// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define tle ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solution() {
  lli l, r, x;
  cin >> l >> r >> x;
  lli m, res;
  res = r / x + r % x;
  m = r / x * x - 1;
  if (m >= l) res = max(res,  m / x + m % x);
  cout << res << endl;
}

int main() {
  tle;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    solution();
  }

  return 0;
}
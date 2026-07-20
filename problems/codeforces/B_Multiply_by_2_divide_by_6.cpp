// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  ll n;
  cin >> n;
  ll cnt2 = 0, cnt3 = 0;
  while (n % 2 == 0) {
    n /= 2;
    cnt2++;
  }
  while (n % 3 == 0) {
    n /= 3;
    cnt3++;
  }
  if (n == 1 && cnt2 <= cnt3) {
    cout << 2 * cnt3 - cnt2 << "\n";
  } else {
    cout << "-1\n";
  }
}

int main() {
  TLE;
  int test_case, t = 1;
  cin >> test_case;
  while (test_case--) {
    Solution();
  }
  return 0;
}
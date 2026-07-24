// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution() {
  ll n;
  cin >> n;
  ll x = n % 2020;
  ll y = (n - x) / 2020 - x;
  if (y >= 0 && x * 2021 + y * 2020 == n) cout << "YES\n";
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
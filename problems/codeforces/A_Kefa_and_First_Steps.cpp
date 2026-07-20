// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution() {
  // start coding from here
  int n;
  cin >> n;
  ll cnt = 0;
  vll vec, max;
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    vec.push_back(x);
  }
  for (ll i = 0; i < n - 1; i++) {
    if (vec[i] <= vec[i + 1]) {
      cnt++;
    } else {
      max.push_back(++cnt);
      cnt = 0;
    }
  }
  if (vec[n - 2] <= vec[n - 1]) {
    max.push_back(++cnt);
  }
  if (max.empty()) {
    cout << n << "\n";
  } else {
    ll maximum = max[0];
    for (int i : max) {
      if (i > maximum) {
        maximum = i;
      }
    }
    cout << maximum << "\n";
  }
}

int main() {
  TLE;
  Solution();

  return 0;
}
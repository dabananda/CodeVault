/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-10-02 19:36:16
 * Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi pair<int, int>
#define pb push_back
#define nl "\n"

bool f(ll x, ll n) {
  if (x > n) return false;
  if (x == n) return true;
  return f(x * 10, n) || f(x * 20, n);
}

void solution() {
  ll n;
  cin >> n;
  cout << (f(1, n) ? "YES" : "NO") << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while (t--) solution();

  return 0;
}

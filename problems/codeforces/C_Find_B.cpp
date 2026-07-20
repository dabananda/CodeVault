// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/contest/1923/problem/C
// Time complexity: O(n + q)
// Space complexity: O(n)

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define si set<int>
#define sc set<char>
#define mii map<int, int>
#define mci map<char, int>
#define msi map<string, int>
#define em emplace_back
#define ef emplace_front
#define pb push_back
#define pf push_front
#define nl "\n"
#define sortVec(v) sort(v.begin(), v.end())
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)

void Dabananda_Mitra() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
 
void solution() {
  ll n, q;
  cin >> n >> q;
  vll pre(n), one(n), a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    pre[i] = a[i];
    a[i] == 1 ? one[i] = a[i] : 0;
  }
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i] + pre[i - 1];
    one[i] = one[i] + one[i - 1];
  }
  while (q--) {
    ll l, r;
    cin >> l >> r;
    l--, r--;
    if (l == r) {
      cout << "NO\n";
      continue;
    }
    ll sum = pre[r];
    ll cnt = one[r];
    if (l > 0) {
      sum = sum - pre[l - 1];
      cnt = cnt - one[l - 1];
    }
    sum = sum - (2 * cnt);
    ll rem = r - l + 1 - cnt;
    if (sum >= rem) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
 
int main() {
  Dabananda_Mitra();
  int t; cin >> t;
  while (t--) {
    solution();
  }
  return 0;
}
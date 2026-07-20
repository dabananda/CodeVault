// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/contest/1923/problem/B
// Time complexity: O(n) per test case
// Space complexity: O(n) per test case

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
  ll n, k;
  cin >> n >> k;
  vi a, b;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.pb(x);
  }
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    b.pb(x);
  }
  vi cnt;
  for (int i = 0; i <= n; i++) {
    cnt.pb(0);
  }
  for (int i = 0; i < n; i++) {
    cnt[abs(b[i])] += a[i];
  }
  ll sum = 0;
  bool flag = false;
  for (int i = 0; i <= n; i++) {
    sum += cnt[i];
    if (sum > i * k) {
      flag = true;
      break;
    }
  }
  cout << (flag ? "NO" : "YES") << nl;
}

int main() {
  Dabananda_Mitra();
  int t;
  cin >> t;
  while (t--) {
    solution();
  }
  return 0;
}
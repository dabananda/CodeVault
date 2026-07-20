// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/contest/1923/problem/A
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
  int n;
  cin >> n;
  vi v(n);
  for (int& x : v) cin >> x;
  int cnt = 0, l, r;
  for (int i = 0; i < n; i++) {
    if (v[i] == 1 && v[i + 1] == 0) {
      l = i;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] == 1 && v[i - 1] == 0) {
      r = i;
      break;
    }
  }
  for (int i = l; i <= r; i++) {
    if (v[i] == 0) cnt++;
  }
  cout << cnt << nl;
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
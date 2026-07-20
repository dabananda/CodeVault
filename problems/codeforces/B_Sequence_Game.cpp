// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/problemset/problem/1862/B

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define em emplace_back
#define ef emplace_front
#define pb push_back
#define pf push_front
#define nl "\n"
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  int n;
  cin >> n;
  vi v(n);
  loop(i, 0, n) cin >> v[i];
  vi ans;
  ans.em(v[0]);
  for (int i = 1; i < n; i++) {
    if (v[i] < v[i - 1]) {
      ans.em(v[i]);
      ans.em(v[i]);
    } else {
      ans.em(v[i]);
    }
  }
  cout << ans.size() << "\n";
  for (auto x: ans) cout << x << " ";
  cout << "\n";
}
 
int main() {
  Dabananda_Mitra;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    solution();
  }
  return 0;
}
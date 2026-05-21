// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  // start code from here
  int n;
  cin >> n;
  vi v(n);
  for (int &x: v) {
    cin >> x;
  }
  int ans = 2;
  if (is_sorted(v.begin(), v.end())) {
    ans = 0;
  } else if (v[0] == 1 || v[n - 1] == n) {
    ans = 1;
  } else if (v[0] == n && v[n - 1] == 1) {
    ans = 3;
  }
  cout << ans << "\n";
}
 
int main() {
  fastio;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    solution();
  }
  cout << "\n";
  return 0;
}
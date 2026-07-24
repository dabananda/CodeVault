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

int main() {
  fastio;
  int n, q;
  cin >> n >> q;
  vll v(n), a(n + 1);
  for (auto &i : v) cin >> i;
  sort(v.begin(), v.end(), greater<ll>());
  for (auto i = 0; i < n; i++) a[i + 1] = v[i] + a[i];
  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << a[x] - a[x - y] << "\n";
  }
  
  return 0;
}
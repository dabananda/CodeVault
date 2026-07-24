// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: 
 
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
#define sort(v) sort(v.begin(), v.end())
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  int n;
  cin >> n;
  vi v(n);
  for (auto& x: v) cin >> x;
  sort(v);
  if (v.back() == v[0]) cout << "-1\n";
  else {
    int x = 0;
    while (v[x] == v[0]) x++;
    cout << x << " " << n - x << "\n";
    for (int i = 0; i < x; i++) cout << v[i] << " ";
    cout << "\n";
    for (int i = x; i < n; i++) cout << v[i] << " ";
    cout << "\n";
  }
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
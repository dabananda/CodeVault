// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/contest/1926/problem/B
// Time: O()
// Space: O()

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
#define sort(v) sort(v.begin(), v.end())
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  int n;
  cin >> n;
  char a[n][n];
  vi v;
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      if (a[i][j] == '1') {
        cnt++;
      }
    }
    if (cnt > 0) v.push_back(cnt);
  }
  bool square = true;
  for (int i = 1; i < v.size(); i++) {
    if (v[0] != v[i]) {
      square = false;
      break;
    }
  }
  if (square) cout << "SQUARE\n";
  else cout << "TRIANGLE\n";
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
// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/contest/1931/problem/A
// Time: O(1)
// Space: O(1)

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
  int a = max(1, n - 52);
  int b = max(1, n - a - 26);
  int c = max(1, n - a - b);
  cout << char(a + 96) << char(b + 96) << char(c + 96) << nl;
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
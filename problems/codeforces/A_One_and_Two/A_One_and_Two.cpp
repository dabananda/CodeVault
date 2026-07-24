// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/problemset/problem/1788/A
// Time: O(n)
// Space: O(n)

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

int solution() {
  int n;
  cin >> n;
  int a[n];
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 2) {
      sum += a[i];
    }
  }
  ll total = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 2) {
      total += a[i];
    }
    if (total == sum - total) {
      return i + 1;
    }
  }
  return -1;
}

int main() {
  Dabananda_Mitra;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    cout << solution() << nl;
  }
  return 0;
}
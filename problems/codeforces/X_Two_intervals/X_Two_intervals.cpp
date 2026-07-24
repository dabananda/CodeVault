// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
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
  ll l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  if (l2 >= l1 && l2 <= r1) {
    cout << l2 << " ";
    if (r1 < r2) {
      cout << r1 << nl;
    } else {
      cout << r2 << nl;
    }
  } else if (l2 < l1 && r2 >= l1) {
    cout << l1 << " ";
    if (r2 < r1) {
      cout << r2;
    } else {
      cout << r1;
    }
  } else {
    cout << "-1\n";
  }
}

int main() {
  Dabananda_Mitra;
  // int testCase;
  // cin >> testCase;
  // while (testCase--) {
  solution();
  // }
  return 0;
}
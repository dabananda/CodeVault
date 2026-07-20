// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: 
// Time: O(n)
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
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  ll n, k;
  cin >> n >> k;
  if (n % 2 == 0 || n % k == 0 || (n - k) % 2 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}
 
int main() {
  Dabananda_Mitra;
  ll testCase;
  cin >> testCase;
  while (testCase--) {
    solution();
  }
  return 0;
}
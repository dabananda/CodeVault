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
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solution() {
  int n;
  cin >> n;
  int minVal = INT_MAX;
  while (n--) {
    int x;
    cin >> x;
    minVal = min(minVal, abs(x));
  }
  cout << minVal << "\n";
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
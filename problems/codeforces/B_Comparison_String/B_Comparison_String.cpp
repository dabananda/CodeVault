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
  string s;
  cin >> s;
  int res = 1, x = 1;
  for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1])
      x = 1;
    else
      x++;
    res = max(res, x);
  }
  cout << res + 1 << "\n";
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
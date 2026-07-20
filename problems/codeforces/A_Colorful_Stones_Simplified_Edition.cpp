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
  string s, t;
  cin >> s >> t;
  int pos = 0, len = t.length();
  for (int i = 0; i < len; i++) {
    if (t[i] == s[pos]) {
      pos++;
    }
  }
  cout << pos + 1;
}

int main() {
  fastio;
  // int testCase;
  // cin >> testCase;
  // while (testCase--) {
  solution();
  // }
  cout << "\n";
  return 0;
}
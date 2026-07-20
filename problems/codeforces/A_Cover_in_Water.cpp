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
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solution() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int len = s.length();
  int ans1 = 0, ans2 = 0;
  for (int i = 0; i < len; i++) {
    if (ans1 > 2) break;
    if (s[i] == '.') {
      ans1++;
      ans2++;
    } else {
      ans1 = 0;
    }
  }
  ans1 > 2 ? cout << "2\n" : cout << ans2 << "\n";
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
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
  string s;
  cin >> s;
  if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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
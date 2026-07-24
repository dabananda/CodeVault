/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://codeforces.com/contest/1941/problem/C
// Time complexity: O(t*n)
// Space complexity: O(1)

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define si set<int>
#define sc set<char>
#define mii map<int, int>
#define mci map<char, int>
#define msi map<string, int>
#define em emplace_back
#define ef emplace_front
#define pb push_back
#define pf push_front
#define nl "\n"
#define sortVec(v) sort(v.begin(), v.end())
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)

void Dabananda_Mitra() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
 
void solution() {
  int n, cnt = 0;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
      cnt++, i += 2;
    }
    if (i + 4 < n && s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e') {
      cnt++, i += 4;
    } else if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
      cnt++, i += 2;
    }
  }
  cout << cnt << nl;
}
 
int main() {
  Dabananda_Mitra();
  int t; cin >> t;
  while (t--) {
    solution();
  }
  return 0;
}
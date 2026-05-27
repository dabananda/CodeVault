/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://codeforces.com/problemset/problem/1666/D
// Time complexity: O()
// Space complexity: O()

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
  string s, t, ans = "";
  cin >> s >> t;
  int sl = s.length(), tl = t.length();
  map<int, int> mpp;
  for (int i = 0; i < tl; i++) {
    mpp[t[i] - 'A']++;
  }
  for (int i = sl - 1; i >= 0; i--) {
    if (mpp[s[i] - 'A']) {
      ans += s[i];
      mpp[s[i] - 'A']--;
    }
  }
  reverse(ans.begin(), ans.end());
  cout << (ans == t ? "YES\n" : "NO\n");
}

int main() {
  Dabananda_Mitra();
  int t;
  cin >> t;
  while (t--) {
    solution();
  }
  return 0;
}
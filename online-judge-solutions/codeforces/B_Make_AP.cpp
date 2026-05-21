/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://codeforces.com/problemset/problem/1624/B
// Time complexity: O(1)
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
  int a, b, c, m = -1;
  cin >> a >> b >> c;
  if (2 * b - c > 0 && (2 * b - c) % a == 0) {
    m = (2 * b - c) / a;
  } else if ((a + c) % (2 * b) == 0) {
    m = (a + c) % (2 * b);
  } else if (2 * b - a > 0 && (2 * b - a) % c == 0) {
    m = (2 * b - a) % c;
  }
  cout << (m == - 1 ? "NO" : "YES") << nl;
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
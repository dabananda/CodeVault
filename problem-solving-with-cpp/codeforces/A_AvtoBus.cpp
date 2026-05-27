/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://codeforces.com/problemset/problem/1679/A
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
  ll n;
  cin >> n;

  if (n & 1 || n < 4) {
    cout << -1 << nl;
    return;
  }

  ll min = n / 6, max = n / 4;
  if (n % 6 == 2 && n - 8 >= 0) {
    min = (n - 8) / 6 + 2;
  } else if (n % 6 == 4 && n - 4 >= 0) {
    min = (n - 4) / 6 + 1;
  }
  cout << min << " " << max << nl;
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
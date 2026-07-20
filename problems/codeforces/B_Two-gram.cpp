// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<string, int> m;
  for (int i = 0; i < s.length() - 1; i++) {
    m[s.substr(i, 2)]++;
  }
  map<string, int>::iterator it;
  int max = 0;
  string ans;
  for (it = m.begin(); it != m.end(); it++) {
    if (it->second > max) {
      ans = it->first, max = it->second;
    }
  }
  cout << ans << "\n";
}

int main() {
  TLE;
  Solution();
  return 0;
}
// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string newS;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  newS.push_back(s[0]);
  for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1]) {
      newS.push_back(s[i]);
    }
  }
  if (newS == "meow") cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  TLE;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    Solution();
  }

  return 0;
}
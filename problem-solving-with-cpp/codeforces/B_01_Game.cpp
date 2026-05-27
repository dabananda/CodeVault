// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define tle ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solution() {
  string s;
  cin >> s;
  int cntZero = 0, cntOne = 0, len = s.length();
  for (int i = 0; i < len; i++) {
    if (s[i] == '0') cntZero++;
    else cntOne++; 
  }
  min(cntOne, cntZero) % 2 != 0 ? cout << "DA\n" : cout << "NET\n";
}

int main() {
  tle;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    solution();
  }

  return 0;
}
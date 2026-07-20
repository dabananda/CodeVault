// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution(int t = 0) {
  // start coding from here
  string s, remix = "WUB", new_string = "";
  cin >> s;
  bool flag = false;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      i += 2;
      flag = true;
    } else {
      if (flag && new_string.length() != 0) {
       new_string += ' ';
       new_string += s[i];
      } else {
        new_string += s[i];
      }
      flag = false;
    }
  }
  cout << new_string << "\n";
}

int main() {
  TLE;
  Solution();

  return 0;
}
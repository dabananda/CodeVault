// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool ExtremeRoundChecker(int n) {
  string s = to_string(n);
  int len = s.length(), count = 0;
  for (int i = 0; i < len; i++) {
    if (s[i] != '0') {
      count++;
    }
  }
  return count == 1;
}

int main() {
  TLE;
  vector<int> vec;
  for (int i = 1; i <= 999999; i++) {
    if(ExtremeRoundChecker(i)) {
      vec.push_back(i);
    }
  }
  int test_case;
  cin >> test_case;
  while (test_case--) {
    int n, ans = 0;
    cin >> n;
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++) {
      if (*it <= n) {
        ans++;
      } else {
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}

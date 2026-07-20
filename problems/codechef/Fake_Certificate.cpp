#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0, cnt0 = 0, x = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') {
        x++;
        cnt0 = max(cnt0, x);
      } else {
        cnt1++;
        x = 0;
      }
    }
    cout << cnt1 + cnt0 << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int n, k, one = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        one++;
      }
    }
    if (k >= one) {
      int newLen = n - k;
      string newS = "";
      for (int i = 0; i < newLen; i++) {
        newS += '0';
        k--;
      }
      cout << newS << "\n";
    } else {
      for (int i = 0; i < n; i++) {
        if (k == 0) {
          break;
        }
        if (s[i] == '1') {
          s[i] = '0';
          k--;
        }
      }
      cout << s << "\n";
    }
  }
  return 0;
}
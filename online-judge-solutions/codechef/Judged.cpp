#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < 5; i++) {
      if (s[i] != '0') {
        res++;
      }
    }
    if (res < 4)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}

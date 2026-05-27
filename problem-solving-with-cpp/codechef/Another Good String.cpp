// Verdict: Time Limit Exceeded (0.99)

#include <bits/stdc++.h>
using namespace std;

int countGoodString(string s) {
  int res = 1, cnt = 1, n = s.size();
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) cnt++;
    else cnt = 1;
    res = max(res, cnt);
  }
  return res;
}

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    cout << countGoodString(s) << " ";
    for (int i = 0; i < q; i++) {
      char c;
      cin >> c;
      s += c;
      cout << countGoodString(s) << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
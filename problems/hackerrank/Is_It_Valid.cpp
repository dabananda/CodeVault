/**
 * Title: Is It Valid
 * Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/is-it-valid-1-1
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-07-13 16:48:59
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    stack<char> st;
    int len = s.length();
    
    for (int i = 0; i < len; i++) {
      if (!st.empty() && s[i] == '1' && st.top() == '0') {
        st.pop();
      } else if (!st.empty() && s[i] == '0' && st.top() == '1') {
        st.pop();
      } else {
        st.push(s[i]);
      }
    }

    if (st.empty()) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}

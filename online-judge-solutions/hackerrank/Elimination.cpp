/**
 * Title: Elimination
 * Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/elimination-2-2
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-07-13 17:41:41
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
      if (!st.empty() && (st.top() == '0' && s[i] == '1')) {
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
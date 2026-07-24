// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/contest/1930/problem/B
// Time: O(nlogn)
// Space: O(n)

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    set<int> st;
    for (int i = 1; i <= n; i++) {
      st.insert(i);
    }
    for (int i = 1; i <= n; i++) {
      if (i % 2) {
        cout << *st.begin() << " ";
        st.erase(st.begin());
      } else {
        cout << *st.rbegin() << " ";
        st.erase(--st.end());
      }
    }
    cout << "\n";
  }

  return 0;
}
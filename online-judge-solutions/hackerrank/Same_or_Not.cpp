/**
 * Title: Same or Not
 * Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/same-or-not-ii
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-07-13 16:40:06
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  stack<int> s;
  queue<int> q;

  int val;
  for (int i = 0; i < n; i++) {
    cin >> val;
    s.push(val);
  }

  for (int i = 0; i < m; i++) {
    cin >> val;
    q.push(val);
  }

  bool flag = true;
  if (n != m) {
    cout << "NO\n";
  } else {
    while (!s.empty()) {
      if (s.top() != q.front()) {
        flag = false;
        break;
      }
      s.pop();
      q.pop();
    }
    flag ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}
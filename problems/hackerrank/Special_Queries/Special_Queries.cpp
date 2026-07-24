/**
 * Title: Special Queries
 * Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/special-queries-1-1
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-07-13 17:17:15
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;

  queue<string> q;

  while (t--) {
    int n;
    cin >> n;

    if (n == 0) {
      string s;
      cin >> s;
      q.push(s);
    } else if (n == 1) {
      if (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
      } else {
        cout << "Invalid\n";
      }
    }
  }

  return 0;
}

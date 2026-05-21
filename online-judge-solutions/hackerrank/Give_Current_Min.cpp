#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;
  while (n--) {
    int x;
    cin >> x;
    pq.push(x);
  }
  int t;
  cin >> t;
  while (t--) {
    int c;
    cin >> c;
    if (c == 0) {
      int x;
      cin >> x;
      pq.push(x);
      cout << pq.top() << endl;
    } else if (c == 1) {
      if (pq.empty()) {
        cout << "Empty" << endl;
      } else {
        cout << pq.top() << endl;
      }
    } else if (c == 2) {
      if (!pq.empty()) {
        pq.pop();
      }
      if (pq.empty()) {
        cout << "Empty" << endl;
      } else {
        cout << pq.top() << endl;
      }
    }
  }

  return 0;
}
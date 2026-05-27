#include <bits/stdc++.h>

using namespace std;

int main() {
  list<int> ll;
  int q;
  cin >> q;
  while (q--) {
    int x, v;
    cin >> x >> v;
    if (x == 0) {
      ll.push_front(v);
    } else if (x == 1) {
      ll.push_back(v);
    } else if (x == 2) {
      if (v < 0 || v >= ll.size()) {
      } else {
        auto it = ll.begin();
        advance(it, v);
        ll.erase(it);
      }
    }
    cout << "L -> ";
    for (auto it = ll.begin(); it != ll.end(); it++) {
      cout << *it << " ";
    }
    cout << endl;
    cout << "R -> ";
    for (auto it = ll.rbegin(); it != ll.rend(); it++) {
      cout << *it << " ";
    }
    cout << endl;
  }
  return 0;
}

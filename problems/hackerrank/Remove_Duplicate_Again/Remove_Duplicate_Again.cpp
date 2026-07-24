#include <bits/stdc++.h>

using namespace std;

int main() {
  list<int> ll;
  int val;
  while (cin >> val && val != -1) {
    ll.push_back(val);
  }
  ll.sort();
  ll.unique();
  for (auto it = ll.begin(); it != ll.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
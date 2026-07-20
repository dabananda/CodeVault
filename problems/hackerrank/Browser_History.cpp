#include <bits/stdc++.h>

using namespace std;

int main() {
  list<string> ll;
  string s;
  while (cin >> s && s != "end") {
    ll.push_back(s);
  }
  auto curr = ll.begin();
  int q;
  cin >> q;
  while (q--) {
    string command;
    cin >> command;
    if (command == "visit") {
      string address;
      cin >> address;
      string result = "Not Available";
      for (auto it = ll.begin(); it != ll.end(); it++) {
        if (*it == address) {
          result = *it;
          curr = it;
        }
      }
      cout << result << endl;
    } else if (command == "next") {
      if (next(curr) != ll.end()) {
        curr++;
        cout << *curr << endl;
      } else {
        cout << "Not Available" << endl;
      }
    } else if (command == "prev") {
      if (curr != ll.begin()) {
        curr--;
        cout << *curr << endl;
      } else {
        cout << "Not Available" << endl;
      }
    }
  }

  return 0;
}
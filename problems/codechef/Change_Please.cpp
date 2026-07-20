#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    if (x % 10 != 0) {
      x = (x / 10) * 10 + 10;
    }
    cout << 100 - x << "\n";
  }

  return 0;
}

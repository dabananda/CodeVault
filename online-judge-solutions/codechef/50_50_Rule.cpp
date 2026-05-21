#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int a, m;
    cin >> a >> m;
    if (a >= 50 && m < 50)
      cout << "F\n";
    else if (a < 50)
      cout << "Z\n";
    else
      cout << "A\n";
  }
  return 0;
}

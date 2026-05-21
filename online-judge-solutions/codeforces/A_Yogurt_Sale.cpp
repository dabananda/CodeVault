#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int m, a, b;
    cin >> m >> a >> b;
    if (b < a * 2) {
      cout << m / 2 * b + m % 2 * a << endl;
    } else {
      cout << m * a << endl;
    }
  }
  return 0;
}
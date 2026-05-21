#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int sum = 0, x;
    for (int i = 0; i < n; i++) {
      cin >> x;
      sum = sum + x;
    }
    if (m >= sum) {
      cout << 0 << endl;
    } else {
      cout << sum - m << endl;
    }
  }

  return 0;
}
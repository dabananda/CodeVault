#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 1 || b == 1 || c == 1 || d == 1) {
      cout << "OUT\n";
    } else {
      cout << "IN\n";
    }
  }

  return 0;
}
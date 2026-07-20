#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    if (x - 1 < 100 - x) {
      cout << "LEFT\n";
    } else {
      cout << "RIGHT\n";
    }
  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 1; ; i += 2) {
      if (((n ^ i) > 0) && ((n & i) > 0)) {
        cout << i << endl;
        break;
      }
    }
  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    char c;
    int n;
    cin >> c >> n;
    char x = 'a';
    for (int i = 1; i <= 8; i++) {
      if (c == x) {
        for (int j = 1; j <= 8; j++) {
          if (j != n) {
            cout << c << j << endl;
          }
        }
      } else {
        cout << x << n << endl;
      }
      x++;
    }
  }

  return 0;
}
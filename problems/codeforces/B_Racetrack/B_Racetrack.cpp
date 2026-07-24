// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <iostream>

using namespace std;

int main() {
  int x, y, i = 1;
  cin >> x >> y;
  while(true) {
    if (i % x == 0 && i % y == 0) {
      cout << i << endl;
      break;
    }
    i++;
  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int x, y, n;
    cin >> x >> y >> n;
    long long int r = (n - y) / x;
    cout << (x * r) + y << endl;
  }

  return 0;
}
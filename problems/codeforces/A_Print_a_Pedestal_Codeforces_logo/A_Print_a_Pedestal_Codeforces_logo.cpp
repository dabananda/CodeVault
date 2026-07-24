#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    long long int n;
    cin >> n;
    if (n % 3 == 0) {
      cout << n / 3 << " " << (n / 3) + 1 << " " << (n / 3) - 1 << endl;
    } else if (n % 3 == 1) {
      cout << n / 3 << " " << (n / 3) + 2 << " " << (n / 3) - 1 << endl;
    } else {
      cout << (n / 3) + 1 << " " << (n / 3) + 2 << " " << (n / 3) - 1 << endl;
    }
  }

  return 0;
}
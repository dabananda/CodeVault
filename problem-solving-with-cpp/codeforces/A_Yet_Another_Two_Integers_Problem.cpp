#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int testCase = 0; testCase < t; testCase++) {
    long long int a, b;
    cin >> a >> b;
    long long int difference = abs(b - a);
    if (difference % 10 == 0) {
      cout << difference / 10 << endl;
    } else {
      cout << (difference / 10) + 1 << endl;
    }
  }

  return 0;
}
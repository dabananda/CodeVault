#include <iostream>

using namespace std;

int main() {
  int test;
  cin >> test;
  while (test--) {
    int year;
    cin >> year;
    if (year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0))) {
      cout << "February 29" << endl;
    } else {
      cout << "March 1" << endl;
    }
  }

  return 0;
}
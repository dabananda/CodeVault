#include <iostream>

using namespace std;

int main() {
  long long int bill, count = 0;
  cin >> bill;
  while (bill != 0) {
    if (bill / 100 > 0) {
      count++;
      bill = bill - 100;

    } else if (bill / 20 > 0) {
      count++;
      bill = bill - 20;

    } else if (bill / 10 > 0) {
      count++;
      bill = bill - 10;

    } else if (bill / 5 > 0) {
      count++;
      bill = bill - 5;
    } else if (bill < 5) {
      count = count + bill;
      break;
    }
  }
  cout << count << endl;

  return 0;
}
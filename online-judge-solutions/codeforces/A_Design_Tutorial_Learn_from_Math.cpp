#include <bits/stdc++.h>

using namespace std;

bool composite(int n) {
  if (n > 3 && (n % 2 == 0 || n % 3 == 0)) {
    return true;
  }
  return false;
}

int main() {
  int n, sum = 0;
  cin >> n;
  
  int firstNumber, secondNumber;

  if (n % 2 == 0) {
    firstNumber = n / 2;
    secondNumber = n / 2;
  } else {
    firstNumber = n / 2;
    secondNumber = (n / 2) + 1;
  }
  
  while (true) {
    if (composite(firstNumber) == true && composite(secondNumber) == true) {
      if (firstNumber + secondNumber == n) {
        cout << firstNumber << " " << secondNumber << endl;
        break;
      } else {
        firstNumber--;
        secondNumber++;
      }
    } else {
      firstNumber--;
      secondNumber++;
    }
  }

  return 0;
}
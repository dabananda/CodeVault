#include <iostream>

using namespace std;

int main() {
  char c;
  cin >> c;
  if (c >= 65 && c <= 90) {
    c = tolower(c);
    cout << c << endl;
  } else {
    c = toupper(c);
    cout << c << endl;
  }

  return 0;
}
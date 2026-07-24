#include <iostream>

using namespace std;

int main() {
  int a, b;
  char c;
  cin >> a >> c >> b;

  if ((c == '>' && a > b) || (c == '<' && a < b) || (c == '=' && a == b)) {
    cout << "Right\n";
  } else {
    cout << "Wrong\n";
  }

  return 0;
}

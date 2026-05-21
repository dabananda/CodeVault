#include <iostream>

using namespace std;

int main() {
  int row, col;
  cin >> row >> col;
  int flag = col;
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      if (i % 2 != 0) {
        cout << "#";
      } else {
        if (j == flag) {
          cout << "#";
        } else {
          cout << ".";
        }
      }
    }
    if (i % 2 == 0) {
      if (flag == col) {
        flag = 1;
      } else {
        flag = col;
      }
    }
    cout << endl;
  }

  return 0;
}
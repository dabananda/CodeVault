#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int size, sumOfA = 0, sumOfB = 0, flag = 1;
    cin >> size;
    int *a = new int[size];
    int *b = new int[size];
    for (int i = 0; i < size; i++) {
      cin >> a[i];
      sumOfA += a[i];
    }
    for (int i = 0; i < size; i++) {
      cin >> b[i];
      sumOfB += b[i];
    }
    if (sumOfA < sumOfB) {
      cout << "NO" << endl;
    } else {
      for (int i = 0; i < size; i++) {
        if (a[i] < b[i]) {
          flag = 0;
          break;
        }
      }
      if (flag == 1) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  }

  return 0;
}
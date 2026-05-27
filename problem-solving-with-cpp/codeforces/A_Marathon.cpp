#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int count = 0, arr[4];
    for (int i = 0; i < 4; i++) {
      cin >> arr[i];
    }
    for (int i = 1; i < 4; i++) {
      if (arr[i] > arr[0]) count++;
    }
    cout << count << endl;
  }

  return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int testCase() {
  int n;
  cin >> n;
  int numbers[n];
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }
  sort(numbers, numbers + n);
  bool flag = true;
  for (int i = 0; i < n - 1; i++) {
    if (numbers[i] == numbers[i + 1]) {
      flag = false;
      break;
    }
  }
  int min = abs(numbers[0] - numbers[1]);
  if (flag) {
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (abs(numbers[i] - numbers[j]) < min) {
          min = abs(numbers[i] - numbers[j]);
        }
      }
    }
    cout << min << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    testCase();
  }

  return 0;
}
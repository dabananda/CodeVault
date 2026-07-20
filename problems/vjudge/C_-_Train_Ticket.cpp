#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> arr;
  int len = s.length(), sum = 0;
  int z = stoi(s);
  while(z != 0) {
    arr.push_back(z % 10);
    sum = sum + (z % 10);
    z = z / 10;
  }

  if(sum > 7) {
    int x = sum - 7, y = 0;

    vector<int> mark;
    for (int i = 0; i < len; i++) {
      if (y + arr[i] <= x) {
        y = y + arr[i];
        mark.push_back(i);
      }
      if (y == x) {
        break;
      }
    }

    for (int i = 0; i < len; i++) {
      if (i == len - 1) {
        cout << arr[i] << "=7";
      } else if (i == mark[i]) {
        cout << "-" << arr[i];
      } else if (i == 0) {
        cout << arr[i];
      } else {
        cout << arr[i] << "+";
      }
    }
  } else {
    for (int i = 0; i < len; i++) {
      if (i == len - 1) {
        cout << arr[i] << "=7" << endl;
      } else {
        cout << arr[i] << "+";
      }
    }
  }

  return 0;
}
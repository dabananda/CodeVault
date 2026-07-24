// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution() {
  // start coding from here
  char arr[8][8];
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if(arr[i][j] >= 97 && arr[i][j] <= 122) {
        cout << arr[i][j];
      }
    }
  }
  cout << "\n";
}

int main() {
  TLE;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    Solution();
  }

  return 0;
}
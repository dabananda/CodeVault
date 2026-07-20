#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int arr[4];
  for (int i = 0; i < 4; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + 4);
  int firstNumber = arr[3] - arr[0];
  cout << firstNumber << " ";
  for (int i = 1; i < 3; i++) {
    cout << arr[i] - firstNumber << " ";
  }
  cout << endl;

  return 0;
}
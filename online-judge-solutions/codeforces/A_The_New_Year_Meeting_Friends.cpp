#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int arr[3];
  cin >> arr[0] >> arr[1] >> arr[2];
  sort(arr, arr + 3);
  int sum = abs(arr[1] - arr[0]) + abs(arr[1] - arr[2]);
  cout << sum << endl;

  return 0;
}
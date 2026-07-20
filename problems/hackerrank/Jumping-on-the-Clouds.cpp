#include <iostream>

using namespace std;

int main() {
  int n, count = 0;
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for(int i = 0; i < n - 1; i++) {
    if(arr[i + 2] == 0) {
      count++;
      i = i + 1;
    } else if(arr[i + 1] == 0) {
      count++;
    } else {
      continue;
    }
  }

  cout << count << endl;

  return 0;
}
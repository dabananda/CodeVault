#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, count = 1;
    cin >> n;
    string *arr = new string[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + n); 
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] != arr[i + 1]) {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}
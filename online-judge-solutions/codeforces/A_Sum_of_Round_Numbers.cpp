#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int testCase = 0; testCase < t; testCase++) {
    int n, pow = 1;
    cin >> n;
    vector<int> arr;
    while (n != 0) {
      if (n % 10 != 0) {
        arr.push_back((n % 10) * pow);
      }
      n = n / 10;
      pow = pow * 10;
    }
    cout << arr.size() << endl;
    for (auto number : arr) {
      cout << number << " ";
    }
    cout << endl;
  }

  return 0;
}
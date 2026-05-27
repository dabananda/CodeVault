#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    cout << n << " ";
    for (int i = 1; i < n; i++) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}
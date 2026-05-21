#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int candy[n], orange[n];

    // taking input for candy
    for (int i = 0; i < n; i++) {
      cin >> candy[i];
    }

    // taking input for orange
    for (int i = 0; i < n; i++) {
      cin >> orange[i];
    }

    // finding the minimum from both of the arrays
    int minCandy = candy[0], minOrange = orange[0];
    for (int i = 0; i < n; i++) {
      if (candy[i] < minCandy) {
        minCandy = candy[i];
      }
      if (orange[i] < minOrange) {
        minOrange = orange[i];
      }
    }

    
  }

  return 0;
}
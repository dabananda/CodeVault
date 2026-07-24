#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if ((n / 1000) % 2 == 0) {
    cout << "EVEN\n";
  } else {
    cout << "ODD\n";
  }
  return 0;
}
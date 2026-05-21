#include <iostream>

using namespace std;

int main() {
  int n, casePending = 0, recruits = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    
    if (x == -1) {
      if (recruits > 0) {
        recruits--;
      } else {
        casePending++;
      }
    } else {
      recruits += x;
    }
  }

  cout << casePending << endl;

  return 0;
}
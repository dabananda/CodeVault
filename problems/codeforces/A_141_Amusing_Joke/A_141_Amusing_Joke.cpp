#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string guestName, residenceHost, pile;
  cin >> guestName >> residenceHost >> pile;
  if (pile.length() > guestName.length() + residenceHost.length() || pile.length() < guestName.length() + residenceHost.length()) {
    cout << "NO" << endl;
  } else {
    string names = guestName + residenceHost;
    sort(names.begin(), names.end());
    sort(pile.begin(), pile.end());
    bool flag = true;
    for (int i = 0; i < pile.length(); i++) {
      if (names[i] != pile[i]) {
        flag = false;
        cout << "NO" << endl;
        break;
      }
    }
    if (flag) {
      cout << "YES" << endl; 
    }
  }

  return 0;
}
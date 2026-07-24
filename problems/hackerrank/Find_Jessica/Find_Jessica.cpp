#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, a, name = "Jessica";
  getline(cin, s);
  stringstream ss(s);
  int flag = 0;
  while (ss >> a) {
    if (a == name) {
      flag = 1;
      break;
    }
  }
  if (flag == 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }


  return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int stringChecking(string s) {
  int stringLength = s.length(), flag = true;
  for (int i = 0; i < stringLength; i++) {
    for (int j = 0; j < i; j++) {
      if (s[i] == s[j] && s[i] != s[i - 1]) {
        flag = false;
        break;
      }
    }
  }
  if (flag) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int testCase() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  stringChecking(s);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    testCase();
  }

  return 0;
}
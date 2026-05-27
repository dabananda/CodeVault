#include <iostream>
#include <algorithm>
#include <string>

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
  TLE;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n != 5) {
      cout << "NO" << endl;
    } else {
      string x = s;
      transform(x.begin(), x.end(), x.begin(), ::tolower);
      sort(x.begin(), x.end());
      string y = "imrtu";
      int count = 0, lowerCaseCount = 0;
      for (int i = 0; i < 5; i++) {
        if (x[i] == y[i]) {
          count++;
        }
        if ((s[i] >= 97 && s[i] <= 122)) {
          lowerCaseCount++;
        }
      }
      if (count != 5 || lowerCaseCount == 5) {
        cout << "NO" << endl;
      } else {
        for (int i = 0; i < 5; i++) {
          if (s[i] != 'T' && (s[i] >= 65 && s[i] <= 90)) {
            cout << "NO" << endl;
            break;
          } else if (s[i] == 'T' && ((s[i - 1] >= 65 && s[i - 1] <= 90) ||  (s[i + 1] >= 65 && s[i + 1] <= 90))) {
            cout << "NO" << endl;
            break;
          } else if (s[i] == 'T' && ((s[i - 1] >= 97 && s[i - 1] <= 122) ||  (s[i + 1] >= 97 && s[i + 1] <= 122))) {
            cout << "YES" << endl;
            break;
          }
        }
      }
    }
  }

  return 0;
}

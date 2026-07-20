#include <bits/stdc++.h>

using namespace std;

int isFullWord(string a, string b, int s, int lenB) {
  int j = 0;
  for (int i = s; i < lenB + s; i++) {
    if (a[i] != b[j++]) {
      return false;
    }
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b, c = "";
    cin >> a >> b;
    int lenA = a.size(), lenB = b.size();
    for (int i = 0; i < lenA; i++) {
      int flag = isFullWord(a, b, i, lenB);
      if (a[i] == b[0] && lenA >= lenB + i && flag) {
        c += "#";
        i += lenB - 1;
      } else {
        c += a[i];
      }
    }
    cout << c << endl;
  }

  return 0;
}

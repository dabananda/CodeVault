#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  
  while (n--) {
    string s;
    cin >> s;
    if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE" || s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE") {
      count++;
    } else if (s[0] >= 48 && s[0] <= 57) {
      if (stoi(s) < 18) {
        count++;
      }
    }
  }
  cout << count << endl;

  return 0;
}
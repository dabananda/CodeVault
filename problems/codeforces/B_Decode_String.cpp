#include <iostream>
#include <algorithm>
#include <string>

typedef long long ll;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

// Function to reverse a string
void reverseStr(string& str) {
  int n = str.length();
  for (int i = 0; i < n / 2; i++) {
    swap(str[i], str[n - i - 1]);
  }
}

int main() {
  TLE;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    int n;
    cin >> n;
    string s, str;
    cin >> s;
    for (int i = n - 1; i >= 0; i--) {
      if(s[i] == '0') {
        string d;
        d.push_back(s[i - 2]);
        d.push_back(s[i - 1]);
        int x = stoi(d);
        char c = x + 96;
        str.push_back(c);
        i = i - 2;
      } else {
        char c = int (s[i]) + 48;
        str.push_back(c);
      }
    }
    reverseStr(str);
    cout << str << endl;
  }

  return 0;
}
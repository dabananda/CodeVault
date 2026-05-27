#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
      string s;
      cin >> s;
      int tom = 0, jerry = 0;
      for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
          tom++;
        }
        if (s[i + 1] == '0') {}
      }
    }  
    return 0;
}

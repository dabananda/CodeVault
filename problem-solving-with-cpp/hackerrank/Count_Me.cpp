#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);
    map<string, int> mp;
    stringstream ss(s);
    string w, maxW = "";
    int count = 0;
    while (ss >> w) {
      mp[w]++;
      if (mp[w] > count) {
        count = mp[w];
        maxW = w;
      }
    }
    cout << maxW << " " << count << endl;
  }

  return 0;
}

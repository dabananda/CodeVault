#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string aF(string a, string c, int k) {
  for (int i = 0; i < k; i++) {
    c.push_back(a[i]);
    a.erase(remove(a.begin(), a.end(), 'A'), a.end());
  }
}

string bF(string b, string c, int k) {
  for (int i = 0; i < k; i++) {
    c.push_back(b[i]);
    b.erase(remove(b.begin(), b.end(), 'A'), b.end());
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    string a, b, c;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a[0] >= b[0]) {
      aF(a, c, k);
    } else {
      bF(b, c, k);
    }
    cout << c << endl;
  }

  return 0;
}
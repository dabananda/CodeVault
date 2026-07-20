#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, a;
  cin >> n;
  vector<int> p, m, pe;

  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a == 1) p.push_back(i + 1);
    else if (a == 2) m.push_back(i + 1);
    else pe.push_back(i + 1);
  }

  int minimum = min(min(p.size(), m.size()), pe.size());

  cout << minimum << endl;
  for (int i = 0; i < minimum; i++) {
    cout << p[i] << " " << m[i] << " " << pe[i] << endl;
  }

  return 0;
}
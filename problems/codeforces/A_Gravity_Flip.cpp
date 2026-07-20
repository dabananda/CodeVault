// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution() {
  // start coding from here
  int n;
  cin >> n;
  vi a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  if (is_sorted(a.begin(), a.end())) {
    for (int i : a) cout << i << " ";
    cout << "\n";
  } else {
    sort(a.begin(), a.end());
    for (int i : a) cout << i << " ";
    cout << "\n";
  }
}

int main() {
  TLE;
  Solution();

  return 0;
}
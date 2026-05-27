// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution() {
  int n, m, x;
  cin >> n >> m;
  vi vec;
  for (int i = 0; i < m; i++) {
    cin >> x;
    vec.push_back(x);
  }
  sort(vec.begin(), vec.end());
  int best = vec[n - 1] - vec[0];
  for (int i = 1; i <= m - n; i++) {
    best = min(best, vec[i + n - 1] - vec[i]);
  }
  cout << best << "\n";
}

int main() {
  TLE;
  Solution();

  return 0;
}
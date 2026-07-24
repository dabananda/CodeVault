// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  int n, m, in, sum = 0;
  cin >> n >> m;
  vi vec;
  for (int i = 0; i < n; i++) {
    cin >> in;
    vec.push_back(in);
  }
  sort(vec.begin(), vec.end());
  vi::iterator it;
  for (int i = 0; i < m; i++) {
    if (vec[i] < 0) {
      sum += vec[i];
    }
  }
  cout << abs(sum) << "\n";
}

int main() {
  TLE;
  Solution();

  return 0;
}
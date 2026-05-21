// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  int n, in, cnt = 0;
  cin >> n;
  vector<int> vec;
  for (int i = 0; i < n; i++) {
    cin >> in;
    vec.push_back(in);
  }
  sort(vec.begin(), vec.end());
  for (int i = 0; i < n; i++) {
    if (vec[i] == vec[i + 1] && vec[i] == 1) cnt++, i++;
    else cnt++;
  }
  cout << cnt << "\n";
}

int main() {
  TLE;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    Solution();
  }
  return 0;
}
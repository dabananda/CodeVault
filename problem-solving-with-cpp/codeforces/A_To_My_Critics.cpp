// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution(int t) {
  // start coding from here
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  TLE;
  int test_case, t = 1;
  cin >> test_case;
  while (test_case--) {
    Solution(t++);
  }

  return 0;
}
// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define tle                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void solution() {
  int b, c, h, cnt = 0;
  cin >> b >> c >> h;
  for (int i = 0;; i++) {
    b--;
    if (b > 0) {
      if (c > 0)
        cnt++, c--;
      else if (h > 0)
        cnt++, h--;
    } else break;
  }
  cout << cnt * 2 + 1 << endl;
}

int main() {
  tle;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    solution();
  }

  return 0;
}
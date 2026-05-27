#include <bits/stdc++.h>

using namespace std;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution(int t) {
  // start coding from here
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b == c || a + c == b || b + c == a) {
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
#include <iostream>
#include <algorithm>

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
  TLE;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    int distance = x + abs(a - b);
    cout << min(distance, n - 1) << endl;
  }

  return 0;
}
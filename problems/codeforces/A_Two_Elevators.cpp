#include <iostream>
#include <algorithm>

typedef long long ll;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
  TLE;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = a - 1;
    ll y, z;
    if (b < c) {
      z = c - b;
      y = z + (c - 1);
    } else {
      y = b - 1;
    }
    if (x < y) {
      cout << 1 << endl;
    } else if (x > y) {
      cout << 2 << endl;
    } else {
      cout << 3 << endl;
    }
  }

  return 0;
}
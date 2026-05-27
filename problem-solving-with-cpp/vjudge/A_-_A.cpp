#include <iostream>
#include <algorithm>
#include <vector>

typedef long long int lli;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
  TLE;
  int n, x, a, b;
  cin >> n >> a >> b;
  vector<int> vec;
  for (int i = 0; i < n; i++) {
    cin >> x;
    vec.push_back(x);
  }
  int sum = 0;
  for (int i = a; i <= b; i++) {
    sum = sum + vec[i];
  }
  cout << sum << endl;

  return 0;
}
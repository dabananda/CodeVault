#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, m;
    cin >> n >> m;
    long long a[n];
    for (long long i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
      if (m - a[i] > a[i] - 1) {
        sum = sum + (m - a[i]);
      } else {
        sum = sum + (a[i] - 1);
      }
    }
    cout << sum << "\n";
  }

  return 0;
}
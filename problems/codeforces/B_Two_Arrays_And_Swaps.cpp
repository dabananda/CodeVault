#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + n);

    for (int i = 0, j = n - 1; i < k; i++, j--) {
      if (a[i] < b[j]) {
        a[i] = b[j];
      }
    }
    for (auto number : a) sum += number;
    cout << sum << endl;
  }

  return 0;
}
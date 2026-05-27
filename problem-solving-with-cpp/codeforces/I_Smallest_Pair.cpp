#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        ans = min(ans, nums[i] + nums[j] + j - i);
      }
    }
    cout << ans << endl;
  }

  return 0;
}
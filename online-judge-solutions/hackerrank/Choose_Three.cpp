#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, sum;
    cin >> n >> sum;
    int *nums = new int[n];
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    string ans = "NO\n";
    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
          if (nums[i] + nums[j] + nums[k] == sum) {
            ans = "YES\n";
          }
        }
      }
    }
    cout << ans;
    delete[] nums;
  }

  return 0;
}
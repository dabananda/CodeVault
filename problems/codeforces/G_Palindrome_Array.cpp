#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int *nums = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int l = 0, r = n - 1;
  string ans = "YES";
  while (l < r) {
    if (nums[l] != nums[r]) {
      ans = "NO";
      break;
    }
    l++, r--;
  }
  cout << ans << endl;

  return 0;
}
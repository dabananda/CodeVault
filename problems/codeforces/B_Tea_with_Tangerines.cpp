// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution(int t) {
  // start coding from here
  int n, ans = 0;
  cin >> n;
  vi nums;
  for (int i = 0; i < n; i++) {
    int data;
    cin >> data;
    nums.push_back(data);
  }
  for (int i : nums) {
    ans += (i - 1) / (2 * nums[0] - 1);
  }
  cout << ans << "\n";
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
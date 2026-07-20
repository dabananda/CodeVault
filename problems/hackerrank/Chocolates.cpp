/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-10-07 21:52:17
 * Problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-05/challenges/chocolates-22-1
 *
 */

#include <bits/stdc++.h>

using namespace std;

bool canPartition(vector<int>& arr, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) sum += arr[i];
  if (sum % 2 != 0) return false;
  int target = sum / 2;
  bool dp[2005] = {false};
  dp[0] = true;
  for (int i = 0; i < n; i++) {
    for (int j = target; j >= arr[i]; j--) {
      dp[j] = dp[j] || dp[j - arr[i]];
    }
  }
  return dp[target];
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    bool flag = canPartition(arr, n);
    cout << (flag ? "YES" : "NO") << endl;
  }

  return 0;
}

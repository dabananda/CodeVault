/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-10-07 22:31:46
 * Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-05/challenges/exam-marks
 *
 */

#include <bits/stdc++.h>

using namespace std;

int dp[1005][1005];

bool subset_sum(int n, vector<int>& a, int s) {
  if (s == 0) return true;
  if (n == 0) return false;
  if (dp[n][s] != -1) return dp[n][s];
  if (a[n - 1] <= s) {
    int op1 = subset_sum(n - 1, a, s - a[n - 1]);
    int op2 = subset_sum(n - 1, a, s);
    return dp[n][s] = op1 || op2; 
  } else {
    return dp[n][s] = subset_sum(n - 1, a, s);
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int target = 1000 - m;
    memset(dp, -1, sizeof(dp));
    if (subset_sum(n, a, target)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
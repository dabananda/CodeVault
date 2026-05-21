/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-10-07 21:35:21
 * Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-05/chalong long intenges/make-it-2
 *
 */

#include <bits/stdc++.h>

using namespace std;

long long int val;
int dp[100005];

bool rec(long long int n) {
  if (n > val) return false;
  if (dp[n] != -1) return dp[n];
  if (n == val) return dp[n] = 1;
  return dp[n] = rec(n + 3) || rec(n * 2);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> val;
    memset(dp, -1, sizeof(dp));
    bool flag = rec(1);
    if (flag) cout << "YES\n";
    else cout << "NO\n";
  }

  return 0;
}

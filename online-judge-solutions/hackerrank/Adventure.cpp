/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-10-07 21:30:52
 * Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-05/challenges/adventure-1
 *
 */

#include <bits/stdc++.h>

using namespace std;

const int maxN = 1005;
const int maxW = 1005;
int dp[maxN][maxW];

int knapsack(int n, int weight[], int value[], int W) {
  if (n == 0 || W == 0) return 0;
  if (dp[n][W] != -1) return dp[n][W];
  if (weight[n - 1] <= W) {
    int op1 = knapsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
    int op2 = knapsack(n - 1, weight, value, W);
    return dp[n][W] = max(op1, op2);
  } else {
    return dp[n][W] = knapsack(n - 1, weight, value, W);
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, W;
    cin >> n >> W;
    int weight[n], value[n];
    for (int i = 0; i < n; i++) cin >> weight[i];
    for (int i = 0; i < n; i++) cin >> value[i];
    memset(dp, -1, sizeof(dp));
    cout << knapsack(n, weight, value, W) << endl;
  }

  return 0;
}
#include <bits/stdc++.h> 

int f(vector<int>& weight, vector<int>& value, int n, int maxWeight, vector<vector<int>>& dp) {
	if (n == 0) {
		if (weight[0] <= maxWeight) {
			return value[0];
		}
		return 0;
	}
	if (dp[n][maxWeight] != -1) {
		return dp[n][maxWeight];
	}
	int notTake = 0 + f(weight, value, n - 1, maxWeight, dp);
	int take = INT_MIN;
	if (weight[n] <= maxWeight) {
		take = value[n] + f(weight, value, n - 1, maxWeight - weight[n], dp);
	}
	return dp[n][maxWeight] = max(notTake, take);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
	return f(weight, value, n - 1, maxWeight, dp);
}
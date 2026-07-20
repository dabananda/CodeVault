class Solution {
private:
    int dp[101];

    int f(int n, vector<int>& nums) {
        if (n < 0) return 0;
        if (dp[n] != -1) return dp[n];
        int op1 = nums[n] + f(n - 2, nums);
        int op2 = f(n - 1, nums);
        return dp[n] = max(op1, op2);
    }

public:
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        int n = nums.size();
        return f(n - 1, nums);
    }
};
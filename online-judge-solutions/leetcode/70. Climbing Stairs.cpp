class Solution {
private:
    int dp[46];

    int fibo(int n) {
        if (n <= 2) return n;
        if (dp[n] != -1) return dp[n];
        return dp[n] = fibo(n - 1) + fibo(n - 2);
    }

public:
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return fibo(n);
    }
};
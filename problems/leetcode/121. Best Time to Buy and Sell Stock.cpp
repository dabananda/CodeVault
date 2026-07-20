// Problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l = 0, r = 1, mp = 0;
        while (r < n) {
            int cp = prices[r] - prices[l];
            if (prices[l] < prices[r]) mp = max(mp, cp);
            else l = r;
            r++;
        }
        return mp;
    }
};
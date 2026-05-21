/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 23:35:18
Date          : 2026-02-15
Problem Link  : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), p = 0, l = 0, h = 1;
        while (h < n) {
            int cp = prices[h] - prices[l];
            if (prices[h] > prices[l]) p = max(p, cp);
            else l = h;
            h++;
        }
        return p;
    }
};
public class Solution {
    public int MaxProfit(int[] prices) {
        int n = prices.Length;
        int l = 0;
        int r = l + 1;
        int mp = 0;
        while (r < n)
        {
            int cp = prices[r] - prices[l];
            if (prices[r] > prices[l])
            {
                mp = Math.Max(mp, cp);
            }
            else l = r;
            r++;
        }
        return mp;
    }
}
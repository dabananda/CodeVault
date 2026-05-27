class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, len = 0, maxLen = 0, zeros = 0, n = nums.size();
        while (r < n) {
            if (nums[r] == 0) {
                zeros++;
            }
            if (zeros > k) {
                if (nums[l] == 0) {
                    zeros--;
                }
                l++;
            }
            if (zeros <= k) {
                len = r - l + 1;
                maxLen = max(len, maxLen);
            }
            r++;
        }
        return maxLen;
    }
};
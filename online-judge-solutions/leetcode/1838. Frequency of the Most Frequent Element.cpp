// Time Complexity: O(n log n)
// Space Complexity: O(1)
// Problem Link: https://leetcode.com/problems/frequency-of-the-most-frequent-element/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long l = 0, r = 0;
        long long total = 0, res = 0;
        while (r < nums.size()) {
            total += nums[r];
            while (nums[r] * (r - l + 1) > total + k) {
                total -= nums[l];
                l++;
            }
            res = max(res, r - l + 1);
            r++;
        }
        return res;
    }
};
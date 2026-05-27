class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size(), l = 0, r = 0, sum = 0, ans = 0;
        while (r < n) {
            sum += nums[r];
            while (l < r && sum > goal) {
                sum -= nums[l];
                l++;
            }
            if (sum == goal) {
                int tempL = l;
                while (tempL < r && nums[tempL] == 0) {
                    tempL++;
                    ans++;
                }
                ans++;
            }
            r++;
        }
        return ans;
    }
};

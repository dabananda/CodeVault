class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size(), l = 0, r = 0, sum = 0, ans = 0;
        while (r < n) {
            sum += nums[r] % 2;
            while (l < r && sum > k) {
                sum -= nums[l] % 2;
                l++;
            }
            if (sum == k) {
                int tempL = l;
                while (tempL < r && nums[tempL] % 2 == 0) {
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
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int s = nums.size(), ans = 0;
        for (int i = 0; i < s - 1; i++) {
            for (int j = i + 1; j < s; j++) {
                if (nums[i] == nums[j] && i < j) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
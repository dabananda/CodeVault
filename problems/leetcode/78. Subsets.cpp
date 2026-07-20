class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int t = nums.size(), len = (1 << t) - 1;
        vector<vector<int>> ans;
        for (int i = 0; i <= len; i++) {
            vector<int> temp;
            for (int j = 0; j < t; j++) {
                if (((i >> j) & 1) == 1) {
                    temp.push_back(nums[j]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
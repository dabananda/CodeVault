// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        for (int i = 0, j = n; i < n; i++, j++) {
            v.emplace_back(nums[i]);
            v.emplace_back(nums[j]);
        }
        return v;
    }
};
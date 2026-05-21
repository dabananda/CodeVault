class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0);
        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
            if (hash[nums[i]] > 1) return nums[i];
        }
        return -1;
    }
};
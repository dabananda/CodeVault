class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1, n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
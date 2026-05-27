class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size() * 2;
        vector<int> newNums(len);
        int x = 0;
        for (int i = 0; i < len; i++) {
            if (x == nums.size()) x = 0;
            newNums[i] = nums[x];
            x++;
        }
        return newNums;
    }
};
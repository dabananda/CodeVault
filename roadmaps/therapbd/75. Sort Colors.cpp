/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 13:47:21
Date          : 2026-02-18
Problem Link  : https://leetcode.com/problems/sort-colors/description/
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0, n = nums.size();
        for (auto i : nums) {
            if (i == 0) zero++;
            else if (i == 1) one++;
            else two++;
        }
        for (int i = 0; i < zero; i++) nums[i] = 0;
        for (int i = zero; i < zero + one; i++) nums[i] = 1;
        for (int i = zero + one; i < zero + one + two; i++) nums[i] = 2;
    }
};
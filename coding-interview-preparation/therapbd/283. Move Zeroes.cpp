/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 23:34:49
Date          : 2026-02-17
Problem Link  : https://leetcode.com/problems/move-zeroes/description/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), j = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        if (j == -1) return;
        else {
            for (int i = j + 1; i < n; i++) {
                if (nums[i] != 0) {
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
        }
    }
};
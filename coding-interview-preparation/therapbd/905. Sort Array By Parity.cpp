/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 14:32:45
Date          : 2026-02-18
Problem Link  : https://leetcode.com/problems/sort-array-by-parity/description/
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> even;
        vector<int> odd;
        for (int i : nums) {
            if (i % 2 == 0) even.push_back(i);
            else odd.push_back(i);
        }
        even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};
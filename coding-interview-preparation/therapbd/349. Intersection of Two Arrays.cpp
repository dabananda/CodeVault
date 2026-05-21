/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 17:28:53
Date          : 2026-02-18
Problem Link  : https://leetcode.com/problems/intersection-of-two-arrays/description/
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> mp;
        int n = nums1.size();
        for (int i = 0; i < n; i++) {
            mp[nums1[i]] = true;
        }
        vector<int> res;
        set<int> s;
        n = nums2.size();
        for (int i = 0; i < n; i++) {
            if (mp[nums2[i]]) {
                s.insert(nums2[i]);
            }
        }
        for (int i : s) res.push_back(i);
        return res;
    }
};
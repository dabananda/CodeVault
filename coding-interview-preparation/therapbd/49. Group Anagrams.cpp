/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 14:19:37
Date          : 2026-02-13
Problem Link  : https://leetcode.com/problems/group-anagrams/
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (auto s : strs) {
            string key(26, 0);
            for (char c : s) key[c - 'a']++;
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto &p : mp) ans.push_back(p.second);
        return ans;
    }
};
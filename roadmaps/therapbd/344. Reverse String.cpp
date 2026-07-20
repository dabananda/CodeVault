/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 11:18:30
Date          : 2026-02-14
Problem Link  : https://leetcode.com/problems/reverse-string/description/
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, h = s.size() - 1;
        while (l <= h) swap(s[l++], s[h--]);
    }
};
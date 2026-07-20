/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 15:01:28
Date          : 2026-02-14
Problem Link  : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (n < m) return -1;
        for (int i = 0; i < n; i++) {
            string sub = haystack.substr(i, m);
            if (sub == needle) return i;
        }
        return -1;
    }
};

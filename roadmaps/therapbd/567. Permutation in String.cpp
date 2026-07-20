/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 22:30:17
Date          : 2026-02-13
Problem Link  : https://leetcode.com/problems/permutation-in-string/description/
*/

class Solution {
    bool check(vector<int> v1, vector<int> v2) {
        int n = v1.size();
        for (int i = 0; i < n; i++) {
            if (v1[i] != v2[i]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash1(26, 0);
        int n = s1.size();
        int ws = n;
        for (int i = 0; i < n; i++) {
            hash1[s1[i] - 'a']++;
        }
        n = s2.size();
        for (int i = 0; i < n; i++) {
            int w = 0, idx = i;
            vector<int> hash2(26, 0);
            while (w < ws && idx < n) {
                hash2[s2[idx] - 'a']++;
                w++, idx++;
            }
            if (check(hash1, hash2)) return true;
        }
        return false;
    }
};
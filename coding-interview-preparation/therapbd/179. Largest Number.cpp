/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 13:39:14
Date          : 2026-02-18
Problem Link  : https://leetcode.com/problems/largest-number/description/
*/

class Solution {
    static bool comp(string a, string b) {
        return a + b > b + a;
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for (auto i : nums) s.push_back(to_string(i));
        string ans = "";
        sort(s.begin(), s.end(), comp);
        if (s[0] == "0") return "0";
        for (auto c : s) ans += c;
        return ans;
    }
};
/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 18:14:14
Date          : 2026-02-18
Problem Link  : https://www.geeksforgeeks.org/problems/decimal-to-binary-1587115620/0
*/

class Solution {
  public:
    string decToBinary(int n) {
        string ans = "";
        while (n != 0) {
            int rem = n % 2;
            ans += to_string(rem);
            n = n / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
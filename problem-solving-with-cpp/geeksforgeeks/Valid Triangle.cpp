/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 18:14:46
Date          : 2026-02-18
Problem Link  : https://www.geeksforgeeks.org/problems/valid-triangle--121441/0
*/

class Solution {
  public:
    bool checkValidity(int a, int b, int c) {
        return a + b > c && a + c > b && b + c > a;
    }
};
/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 18:09:25
Date          : 2026-02-18
Problem Link  : https://www.geeksforgeeks.org/problems/valid-triangle--121441/1
*/

class Solution {
  public:
    bool checkValidity(int a, int b, int c) {
        return a + b > c && a + c > b && b + c > a;
    }
};
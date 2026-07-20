// Problem link: https://leetcode.com/problems/reverse-string/
// Time complexity: O(n/2)
// Space complexity: O(1)
class Solution {
 public:
  void reverseString(vector<char>& s) {
    int n = s.size();
    int l = 0, h = n - 1;
    while (l <= h) {
      swap(s[l++], s[h--]);
    }
  }
};
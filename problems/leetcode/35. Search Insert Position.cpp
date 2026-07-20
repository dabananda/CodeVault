/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/search-insert-position/description/
// Time complexity: O(logn)
// Space complexity: O(1)

class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int l = 0, h = n - 1, ans = n;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (nums[m] >= target) {
        ans = m, h = m - 1;
      } else {
        l = m + 1;
      }
    }
    return ans;
  }
};
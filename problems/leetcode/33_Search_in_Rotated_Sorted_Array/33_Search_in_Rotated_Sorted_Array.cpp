/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Time complexity: O(logn)
// Space complexity: O(1)

class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int l = 0, h = nums.size() - 1;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (nums[m] == target) {
        return m;
      }
      if (nums[l] <= nums[m]) {
        if (target >= nums[l] && target <= nums[m]) {
          h = m - 1;
        } else {
          l = m + 1;
        }
      } else {
        if (target >= nums[m] && target <= nums[h]) {
          l = m + 1;
        } else {
          h = m - 1;
        }
      }
    }
    return -1;
  }
};
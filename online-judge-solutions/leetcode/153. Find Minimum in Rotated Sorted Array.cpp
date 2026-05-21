/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Time complexity: O(logn)
// Space complexity: O(1)

class Solution {
 public:
  int findMin(vector<int>& nums) {
    int l = 0, h = nums.size() - 1, minNum = INT_MAX;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (nums[l] <= nums[m]) {
        minNum = min(minNum, nums[l]);
        l = m + 1;
      } else {
        minNum = min(minNum, nums[m]);
        h = m - 1;
      }
    }
    return minNum;
  }
};
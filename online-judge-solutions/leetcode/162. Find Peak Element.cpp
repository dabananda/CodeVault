/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/find-peak-element/description/
// Time complexity: O(log n)
// Space complexity: O(1)

class Solution {
 public:
  int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    if (n == 1 || nums[0] > nums[1]) {
      return 0;
    }
    if (nums[n - 1] > nums[n - 2]) {
      return n - 1;
    }
    int l = 1, h = n - 2;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (nums[m] > nums[m - 1] && nums[m] > nums[m + 1]) {
        return m;
      } else if (nums[m] > nums[m - 1]) {
        l = m + 1;
      }
      // else if (nums[m] > nums[m + 1]) {
      //     h = m - 1;
      // }
      else {
        h = m - 1;
      }
    }
    return -1;
  }
};
/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/single-element-in-a-sorted-array/description/
// Time complexity: O(log n)
// Space complexity: O(1)

class Solution {
 public:
  int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
      return nums[0];
    }
    // First element is the single element
    if (nums[0] != nums[1]) {
      return nums[0];
    }
    // Last element is the single element
    if (nums[n - 1] != nums[n - 2]) {
      return nums[n - 1];
    }

    int l = 0, h = n - 1;
    while (l <= h) {
      int m = l + (h - l) / 2;
      // Middle element is the single element
      if (nums[m] != nums[m - 1] && nums[m] != nums[m + 1]) {
        return nums[m];
      }
      // Single element is in right and we are in left
      if (m % 2 == 1 && nums[m] == nums[m - 1] || m % 2 == 0 && nums[m] == nums[m + 1]) {
        l = m + 1;
      } else {
        // Single element is in left and we are in right
        h = m - 1;
      }
    }
    return -1;
  }
};
/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/binary-search/description/
// Time complexity: O(logn)
// Space complexity: O(1)

class Solution {
 public:
  int binarySearch(vector<int>& nums, int l, int h, int t) {
    if (l > h) {
      return -1;
    }
    int m = l + (h - l) / 2;
    if (nums[m] == t) {
      return m;
    } else if (t > nums[m]) {
      return binarySearch(nums, m + 1, h, t);
    }
    return binarySearch(nums, l, m - 1, t);
  }

  int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
  }
};
/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
// Time complexity: O(logn)
// Space complexity: O(1)

class Solution {
 public:
  int lowerBound(vector<int>& arr, int t) {
    int l = 0, h = arr.size() - 1, ans = arr.size();
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (arr[m] >= t) {
        ans = m;
        h = m - 1;
      } else {
        l = m + 1;
      }
    }
    return ans;
  }

  int upperBound(vector<int>& arr, int t) {
    int l = 0, h = arr.size() - 1, ans = arr.size();
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (arr[m] > t) {
        ans = m;
        h = m - 1;
      } else {
        l = m + 1;
      }
    }
    return ans;
  }

  vector<int> searchRange(vector<int>& nums, int target) {
    int lb = lowerBound(nums, target), n = nums.size();
    if (lb == n || target != nums[lb]) {
      return {-1, -1};
    }
    return {lb, upperBound(nums, target) - 1};
  }
};
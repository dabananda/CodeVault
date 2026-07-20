/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/next-permutation/
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
 public:
  void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int idx = -1;
    for (int i = n - 2; i >= 0; i--) {
      if (nums[i] < nums[i + 1]) {
        idx = i;
        break;
      }
    }
    if (idx == -1) {
      return reverse(nums.begin(), nums.end());
    }
    for (int i = n - 1; i > idx; i--) {
      if (nums[idx] < nums[i]) {
        swap(nums[idx], nums[i]);
        break;
      }
    }
    reverse(nums.begin() + idx + 1, nums.end());
  }
};
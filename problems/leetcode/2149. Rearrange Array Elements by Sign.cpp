/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/rearrange-array-elements-by-sign/
// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
 public:
  vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    // All positive numbers will be in even position and negetive will be in odd position
    int pos = 0, neg = 1;
    vector<int> temp(n, 0);
    for (int i = 0; i < n; i++) {
      if (nums[i] < 0) {
        temp[neg] = nums[i];
        neg += 2;
      } else {
        temp[pos] = nums[i];
        pos += 2;
      }
    }
    nums = temp;
    return nums;
  }
};
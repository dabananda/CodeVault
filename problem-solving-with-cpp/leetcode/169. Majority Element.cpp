/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/majority-element/description/
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    // Most voting algorithm
    int n = nums.size(), cnt = 0, major;
    for (int i = 0; i < n; i++) {
      if (cnt == 0) {
        major = nums[i];
      }
      if (nums[i] == major) {
        cnt++;
      } else {
        cnt--;
      }
    }
    return major;
  }
};
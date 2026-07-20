/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
Time & Date: 2024-03-04 10:57:11 PM (Dhaka, Bangladesh)
*/

// Problem link: https://leetcode.com/problems/single-number/description/
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int xorr = 0, n = nums.size();
    for (int i = 0; i < n; i++) {
      xorr = xorr ^ nums[i];
    }
    return xorr;
  }
};
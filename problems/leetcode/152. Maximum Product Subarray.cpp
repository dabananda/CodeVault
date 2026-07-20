/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/maximum-product-subarray/description/
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
 public:
  int maxProduct(vector<int>& nums) {
    int n = nums.size(), maxProduct = INT_MIN, p = 1, s = 1;
    for (int i = 0; i < n; i++) {
      if (p == 0) {
        p = 1;
      }
      if (s == 0) {
        s = 1;
      }
      p *= nums[i];
      s *= nums[n - 1 - i];
      maxProduct = max(maxProduct, max(p, s));
    }
    return maxProduct;
  }
};
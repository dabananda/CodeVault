/*
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * LinkedIn: https://www.linkedin.com/in/dabanandamitra/
 * Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/maximum-subarray/description/
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    // Kadane's Algorithm
    int maxSum = INT_MIN, sum = 0, n = nums.size();
    for (auto x : nums) {
      sum = max(x, sum + x);
      maxSum = max(maxSum, sum);
    }
    return maxSum;
  }
};
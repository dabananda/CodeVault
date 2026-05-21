/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/subarray-sum-equals-k/description/
// Time complexity: O(n)
// Space complexity: O(n)

class Solution {
 public:
  int subarraySum(vector<int>& nums, int k) {
    int n = nums.size(), preSum = 0, cnt = 0;
    map<int, int> mpp;
    mpp[0] = 1;
    for (int i = 0; i < n; i++) {
      preSum += nums[i];
      int r = preSum - k;
      cnt = cnt + mpp[r];
      mpp[preSum]++;
    }
    return cnt;
  }
};
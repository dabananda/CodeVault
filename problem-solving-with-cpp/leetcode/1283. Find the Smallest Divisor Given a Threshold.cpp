/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
// Time complexity: O(n log max(nums))
// Space complexity: O(1)

class Solution {
 public:
  bool check(vector<int>& nums, int threshold, int m) {
    int sum = 0;
    for (int n : nums) {
      sum += ceil((double)n / m);
    }
    return sum <= threshold;
  }

  int smallestDivisor(vector<int>& nums, int threshold) {
    int l = 1, h = *max_element(nums.begin(), nums.end()), ans;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (check(nums, threshold, m)) {
        ans = m;
        h = m - 1;
      } else {
        l = m + 1;
      }
    }
    return ans;
  }
};
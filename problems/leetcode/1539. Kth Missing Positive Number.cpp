/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/kth-missing-positive-number/description/
// Time complexity: O(logn)
// Space complexity: O(1)

class Solution {
 public:
  int findKthPositive(vector<int>& arr, int k) {
    int l = 0, h = arr.size() - 1;
    while (l <= h) {
      int m = l + (h - l) / 2;
      int missing = arr[m] - m - 1;
      if (missing < k) {
        l = m + 1;
      } else {
        h = m - 1;
      }
    }
    return k + h + 1;
  }
};
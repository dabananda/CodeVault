/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/longest-subarray-with-zero-sum_6783450
// Time complexity: O(nlogn)
// Space complexity: O(n)

#include <vector>

int getLongestZeroSumSubarrayLength(vector<int> &arr) {
  // Write your code here.
  int n = arr.size(), sum = 0, maxLen = 0;
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (sum == 0) {
      maxLen = i + 1;
    } else {
      if (mpp.find(sum) != mpp.end()) {
        maxLen = max(maxLen, i - mpp[sum]);
      } else {
        mpp[sum] = i;
      }
    }
  }
  return maxLen;
}
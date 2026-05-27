/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/
// Time complexity: O()
// Space complexity: O()

class Solution {
 public:
  int possible(vector<int>& arr, int day, int m, int k) {
    int cnt = 0, nOfB = 0, n = arr.size();
    for (int i = 0; i < n; i++) {
      if (arr[i] <= day) {
        cnt++;
      } else {
        nOfB += (cnt / k);
        cnt = 0;
      }
    }
    nOfB += (cnt / k);
    return nOfB >= m;
  }

  int minDays(vector<int>& bloomDay, int m, int k) {
    long long n = bloomDay.size();
    long long x = 1ll * m * 1ll * k;
    if (x > n) {
      return -1;
    }
    auto minMaxIt = minmax_element(bloomDay.begin(), bloomDay.end());
    long long low = *minMaxIt.first;
    long long high = *minMaxIt.second;
    while (low <= high) {
      long long mid = low + (high - low) / 2;
      if (possible(bloomDay, mid, m, k)) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return low;
  }
};
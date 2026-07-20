/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// Time complexity: O(N * log(sum(weights[]) – max(weights[]) + 1))
// Space complexity: O(1)

class Solution {
 public:
  int getSum(vector<int>& weights) {
    int sum = 0;
    for (int i : weights) {
      sum += i;
    }
    return sum;
  }

  bool check(vector<int>& weights, int days, int capacity) {
    int dayCnt = 1, load = 0;
    for (int w : weights) {
      if (dayCnt > days) {
        break;
      }
      if (load + w > capacity) {
        load = w;
        dayCnt++;
      } else {
        load += w;
      }
    }
    return dayCnt <= days;
  }

  int shipWithinDays(vector<int>& weights, int days) {
    int l = *max_element(weights.begin(), weights.end());
    int h = getSum(weights);
    int ans;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (check(weights, days, m)) {
        ans = m;
        h = m - 1;
      } else {
        l = m + 1;
      }
    }
    return ans;
  }
};
/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/koko-eating-bananas/description/
// Time complexity: O(n log max(piles))
// Space complexity: O(1)

class Solution {
 public:
  bool isPossible(vector<int>& piles, int h, int mid) {
    long long totalTime = 0, n = piles.size();
    for (int p : piles) {
      totalTime += ceil((double)p / mid);
    }
    return totalTime <= h;
  }

  int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1, high = *max_element(piles.begin(), piles.end());
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (isPossible(piles, h, mid)) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return low;
  }
};
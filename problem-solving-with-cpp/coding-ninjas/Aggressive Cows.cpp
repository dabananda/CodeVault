/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?
// Time complexity: O(NlogN) + O(N * log(max(stalls)-min(stalls)))
// Space complexity: O(1)

bool check(vector<int>& stalls, int k, int n, int dist) {
  int cows = 1, last = stalls[0];
  for (int i = 1; i < n; i++) {
    if (stalls[i] - last >= dist) {
      cows++, last = stalls[i];
    }
    if (cows >= k) {
      return true;
    }
  }
  return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
  sort(stalls.begin(), stalls.end());
  int n = stalls.size();
  int l = 1, h = stalls[n - 1] - stalls[0];
  while (l <= h) {
    int m = l + (h - l) / 2;
    if (check(stalls, k, n, m)) {
      l = m + 1;
    } else {
      h = m - 1;
    }
  }
  return h;
}
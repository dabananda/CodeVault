/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557?
// Time complexity: O(N * log(sum(arr[])-max(arr[])+1))
// Space complexity: O(1)

int check(vector<int>& boards, int m) {
  int cnt = 1, sum = 0;
  for (int i : boards) {
    if (i + sum <= m) {
      sum += i;
    } else {
      cnt++;
      sum = i;
    }
  }
  return cnt;
}

int findLargestMinDistance(vector<int>& boards, int k) {
  int l = *max_element(boards.begin(), boards.end());
  int h = accumulate(boards.begin(), boards.end(), 0);
  while (l <= h) {
    int m = l + (h - l) / 2;
    if (check(boards, m) > k) {
      l = m + 1;
    } else {
      h = m - 1;
    }
  }
  return l;
}
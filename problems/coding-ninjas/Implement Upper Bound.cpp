/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383
// Time complexity: O(logn)
// Space complexity: O(1)

int upperBound(vector<int> &arr, int x, int n) {
  int l = 0, h = n - 1, ans = n;
  while (l <= h) {
    int m = l + (h - l) / 2;
    if (arr[m] > x) {
      ans = m, h = m - 1;
    } else {
      l = m + 1;
    }
  }
  return ans;
}
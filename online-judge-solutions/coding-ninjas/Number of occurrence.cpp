/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?
// Time complexity: O(logn)
// Space complexity: O(1)

// First occurrence
int fOc(vector<int>& arr, int n, int x) {
  int l = 0, h = n - 1, ans = -1;
  while (l <= h) {
    int m = l + (h - l) / 2;
    if (arr[m] == x) {
      ans = m;
      h = m - 1;
    } else if (arr[m] < x) {
      l = m + 1;
    } else {
      h = m - 1;
    }
  }
  return ans;
}

// Last occurrence
int lOc(vector<int>& arr, int n, int x) {
  int l = 0, h = n - 1, ans = -1;
  while (l <= h) {
    int m = l + (h - l) / 2;
    if (arr[m] == x) {
      ans = m;
      l = m + 1;
    } else if (arr[m] < x) {
      l = m + 1;
    } else {
      h = m - 1;
    }
  }
  return ans;
}

int count(vector<int>& arr, int n, int x) {
  int f = fOc(arr, n, x);
  if (f == -1) {
    return 0;
  }
  int l = lOc(arr, n, x);
  return l - f + 1;
}

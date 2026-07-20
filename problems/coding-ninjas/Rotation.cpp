/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/rotation_7449070
// Time complexity: O(logn)
// Space complexity: O(1)

#include <bits/stdc++.h>

int findKRotation(vector<int> &arr) {
  int l = 0, h = arr.size() - 1, in = -1, minNum = INT_MAX;
  while (l <= h) {
    int m = l + (h - l) / 2;
    if (arr[l] <= arr[m]) {
      if (arr[l] < minNum) {
        minNum = arr[l];
        in = l;
      }
      l = m + 1;
    } else {
      if (arr[m] < minNum) {
        minNum = arr[m];
        in = m;
      }
      h = m - 1;
    }
  }
  return in;
}

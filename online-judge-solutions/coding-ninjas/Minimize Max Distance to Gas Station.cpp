/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/minimise-max-distance_7541449
// Time complexity: O(nlogn + klogn)
// Space complexity: O(n-1)+O(n-1)

#include <bits/stdc++.h>
#define ld long double

double minimiseMaxDistance(vector<int> &arr, int k) {
  priority_queue<pair<ld, int>> pq;
  int n = arr.size();
  vector<int> v(n - 1, 0);
  for (int i = 0; i < n - 1; i++) {
    pq.push({arr[i + 1] - arr[i], i});
  }
  for (int i = 1; i <= k; i++) {
    auto tp = pq.top();
    pq.pop();
    int ind = tp.second;
    v[ind]++;
    ld iniDiff = arr[ind + 1] - arr[ind];
    ld newLen = iniDiff / (ld)(v[ind] + 1);
    pq.push({newLen, ind});
  }
  return pq.top().first;
}

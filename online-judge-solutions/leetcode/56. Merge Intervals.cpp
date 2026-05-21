/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/merge-intervals/
// Time complexity: O(nlogn + n)
// Space complexity: O(n)

class Solution {
 public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    for (int i = 0; i < n; i++) {
      if (ans.empty() || intervals[i][0] > ans.back()[1]) {
        ans.push_back(intervals[i]);
      } else {
        ans.back()[1] = max(ans.back()[1], intervals[i][1]);
      }
    }
    return ans;
  }
};
/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/pascals-triangle/
// Time complexity: O(n^2)
// Space complexity: O(n)
class Solution {
 public:
  vector<int> getRow(int n) {
    long long ans = 1;
    vector<int> row;
    row.push_back(ans);
    for (int i = 1; i < n; i++) {
      ans = ans * (n - i);
      ans = ans / i;
      row.push_back(ans);
    }
    return row;
  }

  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++) {
      ans.push_back(getRow(i));
    }
    return ans;
  }
};
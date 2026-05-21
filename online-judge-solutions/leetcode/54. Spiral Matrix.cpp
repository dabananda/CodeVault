/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/spiral-matrix/description/
// Time complexity: O(n*m)
// Space complexity: O(n*m)

class Solution {
 public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int top = 0, bottom = n - 1, l = 0, r = m - 1;
    vector<int> ans;
    while (top <= bottom && l <= r) {
      for (int i = l; i <= r; i++) {
        ans.push_back(matrix[top][i]);
      }
      top++;
      for (int i = top; i <= bottom; i++) {
        ans.push_back(matrix[i][r]);
      }
      r--;
      if (top <= bottom) {
        for (int i = r; i >= l; i--) {
          ans.push_back(matrix[bottom][i]);
        }
        bottom--;
      }
      if (l <= r) {
        for (int i = bottom; i >= top; i--)
          ans.push_back(matrix[i][l]);
        l++;
      }
    }
    return ans;
  }
};
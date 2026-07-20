/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/set-matrix-zeroes/
// Time complexity: O(mn)
// Space complexity: O(1)

class Solution {
 public:
  void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size(), col0 = 1;
    // marking the matrix
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] == 0) {
          matrix[i][0] = 0;
          if (j != 0) {
            matrix[0][j] = 0;
          } else {
            col0 = 0;
          }
        }
      }
    }
    // making rows & cols zero
    for (int i = 1; i < n; i++) {
      for (int j = 1; j < m; j++) {
        if (matrix[i][j] != 0) {
          if (matrix[i][0] == 0 || matrix[0][j] == 0) {
            matrix[i][j] = 0;
          }
        }
      }
    }
    // making the marked rows & cols zero
    if (matrix[0][0] == 0) {
      for (int i = 0; i < m; i++) {
        matrix[0][i] = 0;
      }
    }
    if (col0 == 0) {
      for (int i = 0; i < n; i++) {
        matrix[i][0] = 0;
      }
    }
  }
};
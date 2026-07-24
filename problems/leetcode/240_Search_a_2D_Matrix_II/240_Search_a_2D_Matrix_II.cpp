/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/search-a-2d-matrix-ii/description/
// Time complexity: O(m + n)
// Space complexity: O(1)

class Solution {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int row = 0, col = n - 1;
    while (row < m && col >= 0) {
      if (matrix[row][col] == target) {
        return true;
      } else if (matrix[row][col] < target) {
        row++;
      } else {
        col--;
      }
    }
    return false;
  }
};
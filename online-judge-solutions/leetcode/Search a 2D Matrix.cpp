/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/search-a-2d-matrix/description/
// Time complexity: O(log(NxM))
// Space complexity: O(1)

int n = matrix.size();
int m = matrix[0].size();

// apply binary search:
int low = 0, high = n * m - 1;
while (low <= high) {
  int mid = (low + high) / 2;
  int row = mid / m, col = mid % m;
  if (matrix[row][col] == target)
    return true;
  else if (matrix[row][col] < target)
    low = mid + 1;
  else
    high = mid - 1;
}
return false;
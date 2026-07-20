/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/add-digits/description/
// Time complexity: O(1)
// Space complexity: O(1)

class Solution {
 public:
  int addDigits(int num) {
    if (num == 0) return 0;
    return 1 + ((num - 1) % 9);
  }
};
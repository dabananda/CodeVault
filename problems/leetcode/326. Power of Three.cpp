/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/power-of-three/description/
// Time complexity: O(1)
// Space complexity: O(1)

class Solution {
 public:
  bool isPowerOfThree(int n) {
    //  3^19 = 1162261467 and  3^20 is bigger than int
    return (n > 0 && 1162261467 % n == 0);
  }
};
/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/largest-odd-number-in-string/
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
 public:
  string largestOddNumber(string num) {
    int n = num.size() - 1;
    for (int i = n; i >= 0; i--) {
      if (num[i] % 2 == 1) {
        return num.substr(0, i + 1);
      }
    }
    return "";
  }
};
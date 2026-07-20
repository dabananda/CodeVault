/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/fizz-buzz/
// Time complexity: O(n)
// Space complexity: O(n)

class Solution {
 public:
  vector<string> fizzBuzz(int n) {
    vector<string> v;
    for (int i = 0; i < n; i++) {
      if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0) {
        v.push_back("FizzBuzz");
      } else if ((i + 1) % 3 == 0) {
        v.push_back("Fizz");
      } else if ((i + 1) % 5 == 0) {
        v.push_back("Buzz");
      } else {
        v.push_back(to_string(i + 1));
      }
    }
    return v;
  }
};
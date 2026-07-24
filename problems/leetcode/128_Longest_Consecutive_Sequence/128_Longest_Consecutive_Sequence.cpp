/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/longest-consecutive-sequence/description/
// Time complexity: O(3n)
// Space complexity: O(n)

class Solution {
 public:
  int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) {
      return 0;
    }
    int longest = 1;
    unordered_set<int> st(nums.begin(), nums.end());
    for (auto it : st) {
      if (st.find(it - 1) == st.end()) {
        int x = it, cnt = 1;
        while (st.find(x + 1) != st.end()) {
          cnt++, x++;
        }
        longest = max(longest, cnt);
      }
    }
    return longest;
  }
};
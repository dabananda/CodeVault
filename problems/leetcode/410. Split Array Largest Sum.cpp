/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/split-array-largest-sum/
// Time complexity: O(N * log(sum(arr[])-max(arr[])+1))
// Space complexity: O(1)

class Solution {
 public:
  int cntStu(vector<int>& nums, int m) {
    long long stu = 1, p = 0;
    for (int i : nums) {
      if (p + i <= m) {
        p += i;
      } else {
        stu++;
        p = i;
      }
    }
    return stu;
  }

  int splitArray(vector<int>& nums, int k) {
    int l = *max_element(nums.begin(), nums.end());
    int h = accumulate(nums.begin(), nums.end(), 0);
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (cntStu(nums, m) > k) {
        l = m + 1;
      } else {
        h = m - 1;
      }
    }
    return l;
  }
};
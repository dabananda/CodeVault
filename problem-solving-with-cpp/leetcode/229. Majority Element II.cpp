/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/majority-element-ii/description/
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
 public:
  vector<int> majorityElement(vector<int>& nums) {
    int cnt1 = 0, cnt2 = 0, e1 = INT_MIN, e2 = INT_MIN, n = nums.size();
    for (int i = 0; i < n; i++) {
      if (cnt1 == 0 && e2 != nums[i]) {
        e1 = nums[i], cnt1++;
      } else if (cnt2 == 0 && e1 != nums[i]) {
        e2 = nums[i], cnt2++;
      } else if (nums[i] == e1) {
        cnt1++;
      } else if (nums[i] == e2) {
        cnt2++;
      } else {
        cnt1--, cnt2--;
      }
    }
    cnt1 = cnt2 = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] == e1) {
        cnt1++;
      }
      if (nums[i] == e2) {
        cnt2++;
      }
    }
    int minVal = (int)(n / 3) + 1;
    vector<int> v;
    if (cnt1 >= minVal) {
      v.push_back(e1);
    }
    if (cnt2 >= minVal) {
      v.push_back(e2);
    }
    sort(v.begin(), v.end());
    return v;
  }
};
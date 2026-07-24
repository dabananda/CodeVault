/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/3sum/description/
// Time complexity: O(nlogn + n^2)
// Space complexity: O(1)

class Solution {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
      if (i > 0 && nums[i] == nums[i - 1]) {
        continue;
      }
      int j = i + 1, k = n - 1;
      while (j < k) {
        int sum = nums[i] + nums[j] + nums[k];
        if (sum < 0) {
          j++;
        } else if (sum > 0) {
          k--;
        } else {
          ans.push_back({nums[i], nums[j], nums[k]});
          j++, k--;
          while (j < k && nums[j] == nums[j - 1]) {
            j++;
          }
          while (j < k && nums[k] == nums[k + 1]) {
            k--;
          }
        }
      }
    }
    return ans;
  }
};
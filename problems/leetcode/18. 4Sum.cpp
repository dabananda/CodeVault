/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/4sum/
// Time complexity: O(nlogn + n^3)
// Space complexity: O(1)

class Solution {
 public:
  vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
      if (i > 0 && nums[i] == nums[i - 1]) {
        continue;
      }
      for (int j = i + 1; j < n; j++) {
        if (j != i + 1 && nums[j] == nums[j - 1]) {
          continue;
        }
        int k = j + 1, l = n - 1;
        while (k < l) {
          long long sum = nums[i];
          sum += nums[j];
          sum += nums[k];
          sum += nums[l];
          if (sum == target) {
            ans.push_back({nums[i], nums[j], nums[k], nums[l]});
            k++, l--;
            while (k < l && nums[k] == nums[k - 1]) {
              k++;
            }
            while (k < l && nums[l] == nums[l + 1]) {
              l--;
            }
          } else if (sum < target) {
            k++;
          } else {
            l--;
          }
        }
      }
    }
    return ans;
  }
};
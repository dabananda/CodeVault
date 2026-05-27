class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int size = nums.size();
      int maximum = nums[0], sum = nums[0];
      
      for (int i = 1; i < size; i++) {
        sum = max(nums[i], sum + nums[i]);
        maximum = max(maximum, sum);
      }
      return maximum;
    }
};
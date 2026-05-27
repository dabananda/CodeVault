public class Solution {
    public int FindMin(int[] nums) {
        int l = 0, h = nums.Length - 1, minNum = int.MaxValue;
        while (l <= h) {
            int m = l + (h - l) / 2;
            if (nums[l] <= nums[m]) {
                minNum = Math.Min(minNum, nums[l]);
                l = m + 1;
            } else {
                minNum = Math.Min(minNum, nums[m]);
                h = m - 1;
            }
        }
        return minNum;
    }
}
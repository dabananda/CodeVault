public class Solution {
    public int[] ProductExceptSelf(int[] nums) {
        var len = nums.Length;
        var ans = new int[len];
        Array.Fill(ans, 1);
        for (var i = 1; i < len; i++)
        {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        var suffix = 1;
        for (var i = len - 2; i >= 0; i--)
        {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }
        return ans;
    }
}
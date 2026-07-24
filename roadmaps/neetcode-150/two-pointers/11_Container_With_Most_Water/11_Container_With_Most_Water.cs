public class Solution {
    public int MaxArea(int[] height) {
        int ans = 0;
        int len = height.Length;
        int left = 0;
        int right = len - 1;
        while (left < right) {
            int minValue = Math.Min(height[left], height[right]);
            int store = minValue * (right - left);
            ans = Math.Max(ans, store);
            if (height[left] <= height[right]) left++;
            else right--;
        }
        return ans;
    }
}
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1, maxLeft = 0, maxRight = 0;
        int ans = 0;
        while (l <= r) {
            if (height[l] <= height[r]) {
                if (height[l] >= maxLeft) {
                    maxLeft = height[l];
                } else {
                    ans = ans + maxLeft - height[l];
                }
                l++;
            } else {
                if (height[r] >= maxRight) {
                    maxRight = height[r];
                } else {
                    ans = ans + maxRight - height[r];
                }
                r--;
            }
        }
        return ans;
    }
};
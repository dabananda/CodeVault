class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        l, r = 0, n - 1
        maxLeft, maxRight = 0, 0
        ans = 0
        
        while l <= r:
            if height[l] <= height[r]:
                if height[l] >= maxLeft:
                    maxLeft = height[l]
                else:
                    ans += maxLeft - height[l]
                l += 1
            else:
                if height[r] >= maxRight:
                    maxRight = height[r]
                else:
                    ans += maxRight - height[r]
                r -= 1
        
        return ans
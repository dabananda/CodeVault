class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        heights.append(0)
        st = [-1]
        ans, n = 0, len(heights)
        for i in range (n):
            while heights[i] < heights[st[-1]]:
                h = heights[st.pop()]
                w = i - st[-1] - 1
                ans = max(ans, h * w)
            st.append(i)
        heights.pop()
        return ans
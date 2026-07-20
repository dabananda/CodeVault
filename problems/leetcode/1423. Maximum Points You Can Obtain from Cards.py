class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        l, r = 0, len(cardPoints) - k
        ans = sum(cardPoints[r:])
        max_points = ans
        while r < len(cardPoints):
            ans = ans + (cardPoints[l] - cardPoints[r])
            max_points = max(max_points, ans)
            l, r = l + 1, r + 1
        return max_points
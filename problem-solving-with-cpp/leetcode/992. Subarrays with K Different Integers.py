class Solution:
    def calc(self, nums, k):
        n = len(nums)
        l = 0
        r = 0
        cnt = 0
        m = defaultdict(int)

        while r < n:
            m[nums[r]] += 1
            while len(m) > k:
                m[nums[l]] -= 1
                if m[nums[l]] == 0:
                    del m[nums[l]]
                l += 1
            cnt += r - l + 1
            r += 1

        return cnt

    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
        return self.calc(nums, k) - self.calc(nums, k - 1)

class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        n, ans = len(s), 0
        last_seen = [-1, -1, -1]
        for i in range(n):
            a = ord(s[i]) - ord('a')
            last_seen[a] = i
            if last_seen[0] != -1 or last_seen[1] != -1 or last_seen[2] != -1:
                ans = ans + 1 + min(last_seen[0], last_seen[1], last_seen[2])
        return ans
        
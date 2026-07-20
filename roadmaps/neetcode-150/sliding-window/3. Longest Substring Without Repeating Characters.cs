public class Solution {
    public int LengthOfLongestSubstring(string s) {
        int n = s.Length;
        int l = 0;
        int r = 0;
        int maxLen = 0;
        HashSet<char> set = new HashSet<char>();
        while (r < n) {
            char c = s[r];
            while (set.Contains(c))
            {
                set.Remove(s[l]);
                l++;
            }
            set.Add(c);
            maxLen = Math.Max(maxLen, r - l + 1);
            r++;
        }
        return maxLen;
    }
}
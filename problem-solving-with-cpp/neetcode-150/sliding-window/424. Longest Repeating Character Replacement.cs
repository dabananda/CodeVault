public class Solution {
    public int CharacterReplacement(string s, int k) {
        int n = s.Length;
        int l = 0, r = 0;
        int[] hash = new int[26];
        int maxFreq = 0, maxLen = 0;
        while (r < n)
        {
            hash[s[r] - 'A']++;
            maxFreq = Math.Max(maxFreq, hash[s[r] - 'A']);
            if ((r - l + 1) - maxFreq > k)
            {
                hash[s[l] - 'A']--;
                maxFreq = 0;
                l++;
            }
            maxLen = Math.Max(r - l + 1, maxLen);
            r++;
        }
        return maxLen;
    }
}
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(), l = 0, r = 0, maxLen = 0, maxFreq = 0;
        int hash[26] = {0};
        while (r < n) {
            hash[s[r] - 'A']++;
            maxFreq = max(maxFreq, hash[s[r] - 'A']);
            if ((r - l + 1) - maxFreq > k) {
                hash[s[l] - 'A']--;
                maxFreq = 0, l++;
            }
            maxLen = max(maxLen, r - l + 1);
            r++;
        }
        return maxLen;
    }
};
public class Solution {
    private bool Check(int[] hash1, int[] hash2)
    {
        for (int i = 0; i < hash1.Length; i++)
        {
            if (hash1[i] != hash2[i]) return false;
        }
        return true;
    }

    public bool CheckInclusion(string s1, string s2) {
        int[] hash1 = new int[26];
        for (int i = 0; i < s1.Length; i++)
        {
            hash1[s1[i] - 'a']++;
        }
        int ws = s1.Length;
        for (int i = 0; i < s2.Length; i++)
        {
            int w = 0, idx = i;
            int[] hash2 = new int[26];
            while (w < ws && idx < s2.Length)
            {
                hash2[s2[idx] - 'a']++;
                w++;
                idx++;
            }
            if (Check(hash1, hash2)) return true;
        }
        return false;
    }
}
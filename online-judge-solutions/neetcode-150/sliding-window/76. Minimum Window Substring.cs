public class Solution {
    public string MinWindow(string s, string t) {
        if (t.Length > s.Length) return "";
        int[] need = new int[128];
        int required = t.Length;
        foreach (char c in t) need[c]++;
        int l = 0, r = 0;
        int minLen = int.MaxValue;
        int start = 0;
        while (r < s.Length) {
            char rc = s[r];
            if (need[rc] > 0) required--;
            need[rc]--;
            r++;
            while (required == 0) {
                if (r - l < minLen) {
                    minLen = r - l;
                    start = l;
                }
                char lc = s[l];
                need[lc]++;
                if (need[lc] > 0) required++;
                l++; 
            }
        }
        return minLen == int.MaxValue ? "" : s.Substring(start, minLen);
    }
}

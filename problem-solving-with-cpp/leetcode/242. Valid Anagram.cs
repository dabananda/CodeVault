public class Solution {
    public bool IsAnagram(string s, string t) {
        if (s.Length != t.Length) return false;
        Dictionary<char, int> dict = new Dictionary<char, int>();
        foreach(char c in s)
        {
            if (dict.ContainsKey(c)) dict[c]++;
            else dict[c] = 1;
        }
        foreach(char c in t)
        {
            if(!dict.ContainsKey(c)) return false;
            dict[c]--;
            if (dict[c] == 0) dict.Remove(c);
        }
        return dict.Count == 0;
    }
}
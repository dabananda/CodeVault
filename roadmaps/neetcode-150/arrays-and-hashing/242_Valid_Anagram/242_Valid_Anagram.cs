public class Solution {
    public bool IsAnagram(string s, string t) {
        var dict = new Dictionary<char, int>();
        
        foreach(var c in s)
        {
            if (dict.ContainsKey(c))
            {
                dict[c]++;
            }
            else
            {
                dict[c] = 1;
            }
        }

        foreach(var c in t)
        {
            if (dict.ContainsKey(c))
            {
                dict[c]--;
            }
            else
            {
                return false;
            }
            if (dict[c] == 0)
            {
                dict.Remove(c);
            }
        }

        return dict.Count == 0;
    }
}
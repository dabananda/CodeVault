public class Solution
{
    public string GetKey(string s)
    {
        var freq = new int[26];
        foreach (char c in s)
        {
            freq[c - 'a']++;
        }

        string newWord = "";
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                newWord += ('a' + i);
                newWord += (freq[i].ToString());
            }
        }
        return newWord;
    }

    public IList<IList<string>> GroupAnagrams(string[] strs)
    {
        var d = new Dictionary<string, IList<string>>();
        foreach (var s in strs)
        {
            var key = GetKey(s);
            if (!d.ContainsKey(key))
            {
                d[key] = new List<string>();
            }
            d[key].Add(s);
        }

        var result = new List<IList<string>>();
        foreach (var group in d.Values)
        {
            result.Add(group);
        }
        return result;
    }
}

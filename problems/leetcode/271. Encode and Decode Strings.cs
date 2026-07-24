public class Solution {

    public string Encode(IList<string> strs) {
        var result = "";
        foreach(var s in strs)
        {
            result += (s + "-");
        }
        return result;
    }

    public List<string> Decode(string s) {
        var result = new List<string>();
        string str = "";
        for(var i = 0; i < s.Length; i++)
        {
            if(s[i] == '-')
            {
                result.Add(str);
                str = "";
            }
            else
            {
                str += s[i];
            }
        }
        return result;
   }
}

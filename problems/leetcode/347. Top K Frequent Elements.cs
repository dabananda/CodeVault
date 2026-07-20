public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        var d = new Dictionary<int, int>();
        foreach(var n in nums)
        {
            if (d.ContainsKey(n)) d[n]++;
            else d.Add(n, 1);
        }
        var newDict = d.OrderByDescending(x => x.Value);
        var result = new List<int>();
        int i = 0;
        foreach(var n in newDict)
        {
            if (i == k) break;
            result.Add(n.Key);
            i++;
        }
        return result.ToArray();
    }
}
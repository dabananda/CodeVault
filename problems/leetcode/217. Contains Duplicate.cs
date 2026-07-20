public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        Dictionary<int, bool> arr = new Dictionary<int, bool>();
        foreach(int i in nums)
        {
            if(arr.ContainsKey(i)) return true;
            arr.Add(i, true);
        }
        return false;
    }
}
public class Solution {
    public IList<IList<int>> ThreeSum(int[] nums) {
        var arr = nums;
        var ans = new List<IList<int>>();
        Array.Sort(arr);
        var n = arr.Length;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && arr[i] == arr[i - 1]) continue;
            var j = i + 1;
            var k = n - 1;
            while (j < k)
            {
                var sum = arr[i] + arr[j] + arr[k];
                if (sum < 0) j++;
                else if (sum > 0) k--;
                else
                {
                    ans.Add(new List<int> {arr[i], arr[j], arr[k]});
                    j++;
                    k--;
                    while (j < k && arr[j] == arr[j - 1]) j++;
                    while (j < k && arr[k] == arr[k + 1]) k--;
                }
            }
        }
        return ans;
    }
}
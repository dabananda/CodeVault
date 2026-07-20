public class Solution {
    public int LongestConsecutive(int[] nums) {
        int n = nums.Length;
        if (n == 0) return 0;

        var set = new HashSet<int>(nums);
        int longest = 1;

        foreach (int num in set) {
            if (!set.Contains(num - 1)) {
                int currentNum = num;
                int count = 1;

                while (set.Contains(currentNum + 1)) {
                    currentNum++;
                    count++;
                }

                longest = Math.Max(longest, count);
            }
        }

        return longest;
    }
}

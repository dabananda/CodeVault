public class Solution {
    private bool IsPossible(int[] piles, int h, int mid) {
        long totalTime = 0;
        foreach (int p in piles) {
            totalTime += (long)Math.Ceiling((double)p / mid);
        }
        return totalTime <= h;
    }

    public int MinEatingSpeed(int[] piles, int h) {
        int low = 1;
        int high = piles.Max();
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (IsPossible(piles, h, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
}
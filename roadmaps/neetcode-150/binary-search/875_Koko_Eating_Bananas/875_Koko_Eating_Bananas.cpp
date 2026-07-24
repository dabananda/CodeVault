class Solution {
public:
    long long calcHrs(vector<int>& piles, int mid) {
        int n = piles.size();
        long long hrs = 0;
        for (int pile : piles) {
            hrs += ceil((double)pile / mid);
        }
        return hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        while (l <= r) {
            int mid = (l + r) / 2;
            long long hrs = calcHrs(piles, mid);
            if (hrs <= h) r = mid - 1;
            else l = mid + 1;
        }
        return l;
    }
};
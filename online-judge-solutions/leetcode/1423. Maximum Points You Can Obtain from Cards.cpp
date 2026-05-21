class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l = 0, r = n - k, sum = 0, result;
        for (int i = r ; i < n; i++) {
            sum += cardPoints[i];
        }
        result = sum;
        while (r < n) {
            sum += (cardPoints[l] - cardPoints[r]);
            result = max(result, sum);
            l++, r++;
        }
        return result;
    }
};
// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/
// Time: O(n)
// Space: O(1)

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end());
        int ans = 0;
        for (int i = 1; i < n; i++) {
            ans = max(ans, points[i][0] - points[i - 1][0]);
        }
        return ans;
    }
};
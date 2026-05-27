class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int l = 0, h = (n * m) - 1;
        while (l <= h) {
            int mid = (l + h) / 2;
            int r = mid / m, c = mid % m;
            if (matrix[r][c] == target) return true;
            else if (matrix[r][c] < target) l = mid + 1;
            else h = mid - 1;
        }
        return false;
    }
};
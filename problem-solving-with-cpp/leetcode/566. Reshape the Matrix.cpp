class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      vector<vector<int>> vec( r , vector<int> (c));
      int m = mat.size(), n = mat[0].size();
      if (m * n != r * c) return mat;
      for (int i = 0; i < r * c; i++) {
        vec[i / c][i % c] = mat[i / n][i % n];
      }
      return vec;
    }
};
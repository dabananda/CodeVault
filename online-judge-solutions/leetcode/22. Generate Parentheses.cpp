class Solution {
public:
    void generate(int n, vector<string>& ans, int open, int close, string s) {
        if (s.size() == n * 2) {
            ans.push_back(s);
            return;
        }
        if (open < n) {
            generate(n, ans, open + 1, close, s + "(");
        }
        if (close < open) {
            generate(n, ans, open, close + 1, s + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(n, ans, 0, 0, "");
        return ans;
    }
};
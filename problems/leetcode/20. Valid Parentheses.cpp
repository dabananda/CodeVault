// Problem link: https://leetcode.com/problems/valid-parentheses/description/
// Time: O(n)
// Space: O(n)

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        bool flag = true;
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty() || (c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
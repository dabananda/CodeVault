/**
 * Title: 844. Backspace String Compare
 * Link: https://leetcode.com/problems/backspace-string-compare/
 * Author: Dabananda Mitra
 * Date: 2024-07-12 16:59:04
 *
 */

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a, b;
        for (char i : s) {
            if (i == '#') {
                if (!a.empty()) {
                    a.pop();
                }
            } else {
                a.push(i);
            }
        }
        for (char i : t) {
            if (i == '#') {
                if (!b.empty()) {
                    b.pop();
                }
            } else {
                b.push(i);
            }
        }
        return a == b;
    }
};
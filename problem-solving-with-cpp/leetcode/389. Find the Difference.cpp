class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int lenS = s.size(), lenT = t.size();
        for (int i = 0; i < lenT; i++) {
            if (s[i] != t[i]) {
                return t[i];
            }
        }
        return -1;
    }
};
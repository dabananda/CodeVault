class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = haystack.length();
        for (int i = 0; i < len; i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};
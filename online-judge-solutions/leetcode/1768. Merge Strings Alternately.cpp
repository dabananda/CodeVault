class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int i = 0, j = 0;
        while (word1[i] != '\0' && word2[j] != '\0') {
            s += word1[i++];
            s += word2[j++];
        }
        if (word1[i]) {
            s += word1.substr(i);
        }
        if (word2[j]) {
            s += word2.substr(j);
        }
        return s;
    }
};
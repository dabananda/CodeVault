class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> m;
        int l = 0, r = 0, maxLen = 0;
        int n = fruits.size();
        while (r < n) {
            m[fruits[r]]++;
            if (m.size() > 2) {
                m[fruits[l]]--;
                if (m[fruits[l]] == 0) {
                    m.erase(fruits[l]);
                }
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
            r++;
        }
        return maxLen;
    }
};
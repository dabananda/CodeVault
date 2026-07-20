class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, x = 0;
        for (auto i : nums) {
            i == 1 ? x++ : x = 0;
            cnt = max(cnt, x);
        }
        return cnt;
    }
};
class Solution {
public:
    int calc(vector<int>& nums, int k) {
        int n = nums.size(), l = 0, r = 0, cnt = 0;
        map<int, int> m;
        while (r < n) {
            m[nums[r]]++;
            while (m.size() > k) {
                m[nums[l]]--;
                if (m[nums[l]] == 0) {
                    m.erase(nums[l]);
                }
                l++;
            }
            cnt += (r - l + 1);
            r++;
        }
        return cnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return calc(nums, k) - calc(nums, k - 1);
    }
};
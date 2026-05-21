class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        long long n = nums.size();
        k = k % n;
        reverse(nums.begin() + (n - k), nums.end());
        reverse(nums.begin(), nums.begin() + (n - k));
        reverse(nums.begin(), nums.end());
    }
};
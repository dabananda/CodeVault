int search(vector<int> &nums, int target) {
    // Write your code here.
    int l = 0, h = nums.size();
    while (l < h) {
        int m = l + (h - l) / 2;
        if (nums[m] == target) {
            return m;
        } else if (target > nums[m]) {
            l = m + 1;
        } else {
            h = h - 1;
        }
    }
    return -1;
}
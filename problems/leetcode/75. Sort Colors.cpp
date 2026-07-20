class Solution {
public:
    void sortColors(vector<int>& nums) {
        // using 3 variables process:
        // int zero = 0, one = 0, two = 0, n = nums.size();
        // for (auto i : nums) {
        //     if (i == 0) zero++;
        //     else if (i == 1) one++;
        //     else two++;
        // }
        // for (int i = 0; i < zero; i++) {
        //     nums[i] = 0;
        // }
        // for (int i = zero; i < zero + one; i++) {
        //     nums[i] = 1;
        // }
        // for (int i = zero + one; i < zero + one + two; i++) {
        //     nums[i] = 2;
        // }

        /*
        Author: Dabananda Mitra
        Email: imdmitra@gmail.com
        GitHub: https://github.com/dabananda
        LinkedIn: https://www.linkedin.com/in/dabanandamitra/
        Department of Computer Science and Engineering (CSE), Session: 2019-2020,
        Institute of Science Trade & Technology (ISTT)
        */

        // using dutch national flag algorithm:
        // Time: O(n), Space: O(1)
        // Problem link: https://leetcode.com/problems/sort-colors/

        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++, mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
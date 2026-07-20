/*
Author: Dabananda Mitra
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department: Computer Science and Engineering (CSE) (Session: 2019-2020)
University: Institute of Science Trade & Technology (ISTT)

Time complexity: O(n)
Extra space complexity: O(1)
Problem link:https://leetcode.com/problems/move-zeroes/description/

Time & Date: Monday, February 26, 2024 11:52 +06 (Dhaka time)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        if (j == -1) {
            return;
        } else {
            for (int i = j + 1; i < n; i++) {
                if (nums[i] != 0) {
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
        }
    }
};

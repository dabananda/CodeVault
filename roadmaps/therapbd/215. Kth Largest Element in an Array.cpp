/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 23:10:33
Date          : 2026-02-16
Problem Link  : https://leetcode.com/problems/kth-largest-element-in-an-array/description/
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k) minHeap.pop();
        }
        return minHeap.top();
    }
};
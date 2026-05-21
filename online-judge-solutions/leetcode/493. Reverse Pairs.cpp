/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/reverse-pairs/
// Time complexity: O(2nlogn)
// Space complexity: O(n)

class Solution {
 public:
  void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
      if (arr[left] <= arr[right]) {
        temp.push_back(arr[left]);
        left++;
      } else {
        temp.push_back(arr[right]);
        right++;
      }
    }
    while (left <= mid) {
      temp.push_back(arr[left]);
      left++;
    }
    while (right <= high) {
      temp.push_back(arr[right]);
      right++;
    }
    for (int i = low; i <= high; i++) {
      arr[i] = temp[i - low];
    }
  }

  int countPairs(vector<int>& arr, int l, int m, int h) {
    int cnt = 0, r = m + 1;
    for (int i = l; i <= m; i++) {
      while (r <= h && arr[i] > 2LL * arr[r]) {
        r++;
      }
      cnt += r - (m + 1);
    }
    return cnt;
  }

  int mergeSort(vector<int>& arr, int low, int high) {
    int cnt = 0;
    if (low >= high) {
      return cnt;
    }
    int mid = low + (high - low) / 2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += countPairs(arr, low, mid, high);
    merge(arr, low, mid, high);
    return cnt;
  }

  int reversePairs(vector<int>& nums) {
    return mergeSort(nums, 0, nums.size() - 1);
  }
};

/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 18:15:23
Date          : 2026-02-18
Problem Link  : https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/0
*/

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], long long low, long long mid, long long high) {
      long long i = low, j = mid, k = 0, count = 0;
      long long temp[high - low + 1];
      while (i < mid && j <= high) {
        if (arr[i] <= arr[j]) {
          temp[k++] = arr[i++];
        } else {
          temp[k++] = arr[j++];
          count += mid - i;
        }
      }
      while (i < mid) temp[k++] = arr[i++];
      while (j <= high) temp[k++] = arr[j++];
      for (int i = low, k = 0; i <= high; i++, k++) arr[i] = temp[k];
      return count;
    }
    
    long long mergeSort(long long arr[], long long low, long long high) {
      long long leftCount, rightCount, mid, count = 0;
      if (high > low) {
        mid = (low + high) / 2;
        leftCount = mergeSort(arr, low, mid);
        rightCount = mergeSort(arr, mid + 1, high);
        count = merge(arr, low, mid + 1, high);
        return leftCount + rightCount + count;
      }
      return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
          long long ans = mergeSort(arr, 0, N - 1);
          return ans;
    }

};
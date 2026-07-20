#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   int n = arr.size();
   for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         if (arr[i] + arr[j] == s) {
            if (arr[i] > arr[j]) {
               ans.push_back({arr[j], arr[i]});
            } else {
               ans.push_back({arr[i], arr[j]});
            }
         }
      }
      sort(ans.begin(), ans.end());
   }
   return ans;
}
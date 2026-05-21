#include <bits/stdc++.h>

using namespace std;

long long int* sort_it(int n) {
  long long int* nums = new long long int[n];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  sort(nums, nums + n, greater<long long int>());

  return nums;
}

int main() {
  int n;
  cin >> n;
  long long int* nums = sort_it(n);
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  delete[] nums;

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

void print(long long int nums[], int n) {
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  long long int nums[n];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  sort(nums, nums + n);
  print(nums, n);
  sort(nums, nums + n, greater<long long int>());
  print(nums, n);

  return 0;
}

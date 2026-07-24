#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int heights[n];
  int maxHeight = 0, maxHeightIndex, minHeight = 1000, minHeightIndex;
  for (int i = 0; i < n; i++) {
    cin >> heights[i];
    if (heights[i] > maxHeight) {
      maxHeight = heights[i];
      maxHeightIndex = i;
    } if (heights[i] <= minHeight) {
      minHeight = heights[i];
      minHeightIndex = i;
    }
  }
  if (maxHeightIndex > minHeightIndex) {
    minHeightIndex++;
  }
  cout << maxHeightIndex + (n - 1) - minHeightIndex << endl;

  return 0;
}
class Solution {
public:
  vector<int> getResult(vector<int>& nums1, vector<int>& nums2, vector<int>& result) {
  int size = nums1.size();
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < nums2.size(); j++) {
      if (nums1[i] == nums2[j]) {
        result.push_back(nums1[i]);
        nums2.erase(nums2.begin() + j);
        break;
      }
    }
  }
  return result;
}
  
  
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      int nums1Size = nums1.size();
      int nums2Size = nums2.size();
      sort(nums1.begin(), nums1.end());
      sort(nums2.begin(), nums2.end());
      vector<int> result;
      if (nums1Size <= nums2Size) {
        return getResult(nums1, nums2, result);
      } else {
        return getResult(nums2, nums1, result);
      }
    }
};
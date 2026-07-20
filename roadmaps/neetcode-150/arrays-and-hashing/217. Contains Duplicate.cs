class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> values;
        for (int num : nums) {
            if (values.count(num) > 0) return true;
            values.insert(num);
        }
        return false;
    }
};
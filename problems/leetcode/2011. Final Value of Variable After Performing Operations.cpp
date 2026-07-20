// Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        int size = operations.size();
        for (int i = 0; i < size; i++) {
            if (operations[i] == "X++" || operations[i] == "++X") {
                res++;
            } else {
                res--;
            }
        }
        return res;
    }
};
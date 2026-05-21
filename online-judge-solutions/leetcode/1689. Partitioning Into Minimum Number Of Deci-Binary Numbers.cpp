class Solution {
public:
    int minPartitions(string n) {
        int maxi = 0, size = n.size();
        for (int i = 0; i < size; i++) {
            maxi = max(maxi, n[i] - '0');
        }
        return maxi;
    }
};
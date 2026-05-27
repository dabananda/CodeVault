// Time Complexity: (O(n))
// Space Complexity: (O(n))

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> freq(n, 0);
    for (auto x : nums) {
        if (x >= 1 && x <= n) {
            freq[x - 1]++;
        }
    }
    return freq;
}
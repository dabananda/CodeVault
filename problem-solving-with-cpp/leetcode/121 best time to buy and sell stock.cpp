class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int size = prices.size();
    int buy = prices[0], max = 0;
    for (int i = 0; i < size; i++) {
      if (prices[i] < buy) {
        buy = prices[i];
      } else if (prices[i] - buy > max) {
        max = prices[i] - buy;
      }
    }
    return max;
  }
};
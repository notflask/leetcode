#include <algorithm>
#include <vector>

class Solution {
public:
  int maxProfit(std::vector<int> &prices) {
    int maxProfit = 0;
    int minPrice = prices.at(0);

    for (int i = 1; i < prices.size(); i++) {
      maxProfit = std::max(maxProfit, prices.at(i) - minPrice);
      minPrice = std::min(prices.at(i), minPrice);
    }

    return maxProfit;
  }
};

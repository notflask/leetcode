#include <map>
#include <vector>

class Solution {
public:
  int majorityElement(std::vector<int> &nums) {
    std::map<int, int> numbers;
    for (auto n : nums)
      numbers[n]++;

    int major = 0;
    int max = 0;

    for (const auto &pair : numbers) {
      if (pair.second > max) {
        major = pair.first;
        max = pair.second;
      }
    }

    return major;
  }
};

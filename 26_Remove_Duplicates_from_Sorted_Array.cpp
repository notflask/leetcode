#include <vector>

class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {
    int i = 0;
    for (int n : nums)
      if (!i || n > nums[i - 1])
        nums[i++] = n;
    return i;
  }
};

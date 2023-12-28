#include <string>
#include <vector>

class Solution {
public:
  std::string longestCommonPrefix(std::vector<std::string> &strs) {
    int count = 0;
    auto shortest =
        *std::min_element(strs.begin(), strs.end(),
                          [](const std::string &a, const std::string &b) {
                            return a.length() < b.length();
                          });

    for (int i = 0; i < shortest.length(); i++) {
      for (int j = 0; j < strs.size(); j++) {
        if (strs[j][i] != shortest[i])
          return shortest.substr(0, count);
      }
      count++;
    }

    return shortest.substr(0, count);
  }
};

#include <cctype>
#include <string>

class Solution {
public:
  bool isPalindrome(std::string normal) {
    std::transform(normal.begin(), normal.end(), normal.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    normal.erase(std::remove_if(normal.begin(), normal.end(),
                                [](char c) { return !(std::isalnum(c)); }),
                 normal.end());

    std::string reversed(normal);
    std::reverse(reversed.begin(), reversed.end());

    return normal == reversed;
  }
};

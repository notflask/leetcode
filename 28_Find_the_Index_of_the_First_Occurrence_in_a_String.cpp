#include <string>

class Solution {
public:
  int strStr(std::string haystack, std::string needle) {
    int m = haystack.size(), n = needle.size(), p = 0;
    while (p + n - 1 < m) {
      if (haystack.substr(p, n) == needle) {
        return p;
      }
      while (p++ + n - 1 < m && haystack[p] != needle[0])
        ;
    }
    return -1;
  }
};

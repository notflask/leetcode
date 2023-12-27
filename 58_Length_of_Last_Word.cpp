#include <string>

class Solution {
public:
  int lengthOfLastWord(std::string s) {
    int length = 0;
    int index = s.length() - 1;

    while (index >= 0 && s[index] == ' ') {
      index--;
    }

    while (index >= 0 && s[index] != ' ') {
      length++;
      index--;
    }

    return length;
  }
};

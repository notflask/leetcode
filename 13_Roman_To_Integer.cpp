#include <string>
#include <unordered_map>

class Solution {
public:
  int romanToInt(std::string romanString) {
    std::unordered_map<char, int> romans;

    romans['I'] = 1;
    romans['V'] = 5;
    romans['X'] = 10;
    romans['L'] = 50;
    romans['C'] = 100;
    romans['D'] = 500;
    romans['M'] = 1000;

    int result = 0;

    for (int i = 0; i < romanString.length(); i++) {
      if (romans[romanString[i]] < romans[romanString[i + 1]]) {
        result -= romans[romanString[i]];
      } else {
        result += romans[romanString[i]];
      }
    }
    return result;
  }
};

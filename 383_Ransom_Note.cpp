#include <string>
#include <unordered_map>

class Solution {
public:
  bool canConstruct(std::string note, std::string magazine) {
    std::unordered_map<char, int> letters;

    for (char letter : magazine) {
      letters[letter]++;
    }

    for (char letter : note) {
      if (letters[letter] <= 0)
        return false;
      letters[letter]--;
    }

    return true;
  }
};

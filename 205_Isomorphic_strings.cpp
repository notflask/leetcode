#include <string>
#include <unordered_map>

class Solution {
public:
  bool isIsomorphic(std::string s, std::string t) {
    if (s.length() != t.length()) {
      return false;
    }

    std::unordered_map<char, char> sToT;
    std::unordered_map<char, char> tToS;

    for (int i = 0; i < s.length(); ++i) {
      char cs = s[i];
      char ct = t[i];

      auto itStoT = sToT.find(cs);
      auto itTtoS = tToS.find(ct);

      if (itStoT == sToT.end() && itTtoS == tToS.end()) {
        sToT[cs] = ct;
        tToS[ct] = cs;
      } else {
        if (itStoT != sToT.end() && itStoT->second != ct) {
          return false;
        }

        if (itTtoS != tToS.end() && itTtoS->second != cs) {
          return false;
        }
      }
    }

    return true;
  }
};

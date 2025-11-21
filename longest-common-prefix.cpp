#include <string>
#include <vector>
class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        std::string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            int j = 0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) ++j;
            prefix.resize(j);
            if (prefix.empty()) return ""; 
        }
        return prefix;
    }
};

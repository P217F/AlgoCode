#include <cstddef>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if(needle.empty()) return 0;
        if(haystack.length() < needle.length()) return -1;

        for(size_t i = 0; i <= haystack.length() - needle.length(); i++) {
            if(haystack[i] == needle[0]) {
                size_t j = 1;
                while (j < needle.length() && haystack[i + j] == needle[j]) {
                    j++;
                }
                if(j == needle.length()) return i;
            }
        }
        return -1;
    }
};

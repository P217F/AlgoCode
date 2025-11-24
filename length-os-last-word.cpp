#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        if(s.empty()) return 0;
        int length=0;
        char* chr = &s[s.size() - 1];

        while(chr >= &s[0] && *chr == ' ') chr--;

        while(chr >= &s[0] && *chr != ' ') {
            length++;
            chr--;
        }

        return length;
    }
};

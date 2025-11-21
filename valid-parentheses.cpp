#include <string>
#include <vector>

class Solution {
public:
    bool isValid(std::string s) {
        if(s.size() < 2) return false;
        std::vector<char> stack;

        for (char c : s) {
            if(c == '(' || c == '[' || c == '{') {
                stack.push_back(c);
            } else {
                if(stack.empty()) return false;
                int diff = (int)c - (int)stack.back();
                if(diff != 1 && diff != 2) return false;
                stack.pop_back();
            }
        }
        return stack.empty();
    }
};

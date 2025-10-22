#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        int temp_num=x,num_check=0;
        if(x<0) {
            return false;
        }
        while(temp_num != 0) {
            num_check=num_check*10+temp_num%10;
            temp_num/=10;
        }
        if(num_check==x)
            return true;
        else
            return false;
    }
};

int main() {
    Solution solution;
    bool check = solution.isPalindrome(121);
    std::cout<<check<<std::endl;
    return 0;
}

/*#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        long long realnum=0;
        std::vector<int> digits_a;
        for(int i = digits.size()-1; i >= 0; --i) {
            realnum = realnum*10+digits[i];
        }
        realnum+=1;
        while(realnum!=0) {
            digits_a.push_back(realnum%10);
            realnum/=10;
        }
        int n = digits_a.size();
        for(int i = 0; i < n/2; i++) {
            int temp = digits_a[i];
            digits_a[i] = digits_a[n - 1 - i];
            digits_a[n - 1 - i] = temp;
        }
        return digits_a;
    }
};
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i >= 0; --i) {
            if(digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0; // carry
        }
        // Nếu tất cả đều là 9, ví dụ 999 -> 1000
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

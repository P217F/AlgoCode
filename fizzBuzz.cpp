#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n);

        for (int i = 1; i <= n; ++i) {
            bool r3 = (i % 3 == 0);
            bool r5 = (i % 5 == 0);

            if (r3 && r5)
                result[i - 1] = "FizzBuzz";
            else if (r3)
                result[i - 1] = "Fizz";
            else if (r5)
                result[i - 1] = "Buzz";
            else
                result[i - 1] = to_string(i);
        }

        return result;
    }
};

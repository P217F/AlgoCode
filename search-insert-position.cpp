#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        size_t i;
        for(i = 0; i < nums.size(); ++i) {
            if(nums[i] == target) return i;
            if(nums[i] > target) return i;
        }
        return i;
    }
};

int main() {
    std::vector<int> a = {1,3,5,6};
    Solution solution;
    std::cout<<solution.searchInsert(a, 7);
}

#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    for (std::size_t i=0;i<numbers.size()-1;++i) {
        for (std::size_t j=1;j<numbers.size();++j) {
            if (numbers[i]+numbers[j] == target) return {i,j};
        }
    }
    return {};
}

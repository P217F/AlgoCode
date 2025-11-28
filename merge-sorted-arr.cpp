#include <cstddef>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        for (size_t i = 0; i < nums1.size(); ++i) {
            if (nums1[i] == 0 && j < n) {
                nums1[i] = nums2[j++];
            }
        }

        int* left = nums1.data();
        int* end = nums1.data() + nums1.size();

        for (int* i = left; i < end - 1; ++i) {
            int* minPtr = i;
            for (int* j = i + 1; j < end; ++j) {
                if (*j < *minPtr) {
                    minPtr = j;
                }
            }
            if (minPtr != i) {
                int temp = *i;
                *i = *minPtr;
                *minPtr = temp;
            }
        }
    }
};

// O(n^2) time complexity
// O(1) space complexity

#include <vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.size(); ) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);  // Use iterator to erase element at index i
            } else {
                i++;  // Only increment when the element is not equal to val
                count++;
            }
        }
        return count;
    }
};

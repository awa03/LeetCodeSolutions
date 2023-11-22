#include <vector>
#include <unordered_map>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> count;

        for (int num : nums) {
            count[num]++;
        }

        for (const auto& pair : count) {
            if (pair.second == 1) {
                return pair.first;
            }
        }
        
        return -1; // none found
    }
};

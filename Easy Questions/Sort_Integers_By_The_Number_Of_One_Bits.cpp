#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Helper to determine the bit count
    static unsigned int bitCount(int test) {
        unsigned int count = 0; 
        while (test) {
            count += test & 1;
            test >>= 1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), 
            // Use lambda to handle the comparison function
            [] (int lhs, int rhs) {
                // Compare based on bit count and value in case of tie
                return (bitCount(lhs) < bitCount(rhs)) || 
                       (bitCount(lhs) == bitCount(rhs) && lhs < rhs);
            });
        return arr;
    }
};

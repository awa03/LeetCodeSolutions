class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){return false;} 
        return (n & (n-1)) == 0; // And to check if one bit
    }
};
// O(1) time and space complexity

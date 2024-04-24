class Solution {
public:
    int hammingWeight(uint32_t n) {
       int answer = 0;
       for(int i =0; i < 32; i++){
            if((n & 1) == 1) { // Check the first bit
                answer++;
            }
            // need right shift for the bits
            n >>= 1; // Shift bits | shorthand for n = n >> 1;
       }
       return answer;
    }
};

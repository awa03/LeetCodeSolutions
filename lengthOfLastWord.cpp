// Recursive Solution
// Beats 100% of C++ Users

class Solution {
public:
    int lengthOfLastWord(string s) {
        // Recursive Helper
        return helper(s, s.length() - 1, 0);
        
    }
    int helper(const string& s, int index, int lengthSoFar) {
        // if the index is less that 0 return, out of bounds
        if(index < 0){ return lengthSoFar; }
        if (s[index] == ' '){ // if space 
            if (lengthSoFar == 0) { 
                return helper(s, index - 1, 0);
            } else {
                return lengthSoFar;
            }
        } return helper(s, index-1, lengthSoFar+1); // next 

    }
};

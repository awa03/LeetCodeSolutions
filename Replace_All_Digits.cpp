class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.length(); i += 2) { 
            s[i] = shiftCharacter(s[i - 1], s[i] - '0'); 
        }
        return s;
    }
    
    char shiftCharacter(char c, int shift) {
        if (isalpha(c)) { // if digit then shift char one letter
            char base = islower(c) ? 'a' : 'A';
            return static_cast<char>((c - base + shift) % 26 + base); // 26 (num)
        }
        return c; // Return non-alphabetic characters unchanged
    }
};
/*
Time complexity:
O(n) because the dominant factor is the linear iteration through the string.

Space complexity:
O(n) because the function doesn't use any significant additional data structures that scale with the input size.
*/

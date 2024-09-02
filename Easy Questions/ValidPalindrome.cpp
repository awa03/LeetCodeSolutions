#define ENABLE_DEBUG_OUTPUT 0
class Solution {
public:
    bool isPalindrome(string s) {
        int i = s.size() -1, j = 0;
        while(j < i){
            while(j < i && !isalnum(s[i])) i--;
            while(j < i && !isalnum(s[j])) j++;
            if(tolower(s[j]) != tolower(s[i])) return false;
            i--;
            j++;
        } 
        return true;
    }
};

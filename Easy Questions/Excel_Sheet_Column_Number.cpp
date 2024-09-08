class Solution {
public:
    int titleToNumber(string ct) {
       int res = 0; 
       for(char& c : ct)
            res = res * 26 + (c - 'A' + 1);
       return res;
    }
};

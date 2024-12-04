class Solution {
public:

/*

Given ------- 
- Two Strings (0 indexed)

Important ---- 
- If i understand correctly we take the minimum size 
- Take the 

*/

    bool canMakeSubsequence(string str1, string str2) {
        int i = 0;
        int len = str2.length();

        for(char& c : str1){
            if(i < len && (str2[i] - c + 26) % 26 <= 1){
                i++;
            }
        }
        return i == len;
    }
};

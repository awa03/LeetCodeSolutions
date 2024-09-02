class Solution {
public:
    int lengthOfLastWord(string s) {
       int word = 0;
       bool space = false;
       for(char& c : s){
        if(space && isalpha(c)){
           word = 0; 
           space = false;
        } 
            
        if(isspace(c)){
            space = true;
        }

        if(!space)
            word++;
       }
       return word;
    }
};

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int j = 0, s = 0;
        string return_str;
        for(int i = 0; i < word1.size() + word2.size(); i++){
            if(s < j && j < word2.size() + 1){
              return_str += word2[s]; 
              s++;
            }
            else if(j < word1.size()){
                return_str += word1[j]; 
                j++; 
            }
            else if(s <= word2.size()){
               return_str += word2[s]; 
              s++; 
            }
        }
        return return_str;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word;    
        for(int i = 0; i < strs[0].size(); i++){
            char candadite = strs[0][i];
            bool add = true;
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] != strs[0][i]) {
                    add = false;
                    break;
                }
            }
            if(!add) break;
            word += candadite;
        }
        return word;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; 
        
        string word;
        int minLength = strs[0].size();
        
        for (const string& str : strs) {
            minLength = min(minLength, static_cast<int>(str.size()));
        }
        
        for (int i = 0; i < minLength; ++i) {
            char candidate = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != candidate) {
                    return word;  
                }
            }
            word += candidate;
        }
        
        return word;
    }
};

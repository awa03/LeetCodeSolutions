class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
    bool found = false;
    if(s == ""){return true;}
    for(int i = 0; i < t.size(); i++) {
        if(j < s.size() && s[j] == t[i]){
            j++;
            if(j == s.size()) {
                found = true;
                break; 
            }
        }
    }
    return found;
    }
};

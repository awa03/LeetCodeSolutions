class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> iS(200, 0);
        vector<int> iT(200, 0);

        if(s.length() != t.length()) return false; 

        for(int i = 0; i < s.length(); i++){
            if(iS[s[i]] != iT[t[i]]) 
                return false;
            iS[s[i]] = i + 1;
            iT[t[i]] = i + 1;
        }
        return true;
    }
};

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string newStr = "";
        for(int i =0, j =0; i < s.size(); i++){
            if(j < spaces.size() && spaces[j] == i){
                newStr+=' ';
                j++;
            }
            newStr+=s[i];
        }
        return newStr;
    }
};

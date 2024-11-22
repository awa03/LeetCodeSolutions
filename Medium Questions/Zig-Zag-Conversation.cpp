class Solution {
public:
    string convert(string s, int numRows) {
       if(numRows== 1 || numRows>= s.length()){
        return s;
       } 
       int i = 0, j = 1;
       vector<vector<char>> rows(numRows);
       for(char& c : s){
        rows[i].push_back(c);
        if(i ==0){
            j = 1;
        }
        else if(i == numRows-1){
            j = -1;
        }
        i += j;
       }
       string res;
       for(const auto& r : rows){
        for(auto& c : r){
            res+=c;
        }
       }
       return res;
    }
};

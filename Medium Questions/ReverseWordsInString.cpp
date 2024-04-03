class Solution {
public:
    string reverseWords(string s) {
        string str = "";
        vector<string> words;
        for(auto& c : s){
            if(isspace(c) && str.empty()){
                continue;
            }
            else if(isspace(c) && !str.empty()){
                words.push_back(str);        
                str = "";
            }
            else{
                str += c;
            }
        }
        if(!str.empty()){
            words.push_back(str);
        }
        str = "";
        for(int i = words.size() - 1; i >= 0; i--){
           str += words[i]; 
           if(i != 0){
                str += " ";
           }
        }
        return str;
    }
};

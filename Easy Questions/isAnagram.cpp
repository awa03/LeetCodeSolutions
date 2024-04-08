class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for(auto& c : s){
            count[c] += 1;
        }
        for(auto c2 : t){
            count[c2] -= 1;
        }
        for(auto& e: count){
            if(e.second != 0){
                return false;
            }
        }
        return true;
        
    }
};

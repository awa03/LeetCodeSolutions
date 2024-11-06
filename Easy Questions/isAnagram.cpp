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

// this is an easyyyyy problem
// lets use one cache, increase when found in s
// decrease when found in t , voting algorithm 
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> cache;
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++){
            cache[s[i]]++;
            cache[t[i]]--;
        }
        for(auto& entries : cache) {
            if(entries.second != 0) return false;
        }
        return true;
    }
};

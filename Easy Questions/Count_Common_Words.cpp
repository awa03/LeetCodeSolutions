class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
       unordered_map<string, int> cache; 
       for(auto& c : words1){
        cache[c]++;
       }
       int res = 0;
       unordered_map<string, int>cache2;
       for(auto& c : words2){
        cache2[c]++;
        if((cache[c] == 1) && (cache2[c] == 1)){
            res++;
        }
        if((cache2[c] == 2) && (cache[c] == 1)){
            res--;
        }
       }
       return res;
    }
};

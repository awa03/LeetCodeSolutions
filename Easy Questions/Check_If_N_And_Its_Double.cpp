class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       unordered_map<int, int> cache; 
       for(auto& e : arr){
        cache[e]++;
       }
       for(auto& e : arr){
        auto found = cache.find(e * 2);
        if(found != cache.end()){
            if((e == e * 2) && found->second <= 1){
               continue; 
            }
            return true;
        }
       }
       return false;

    }
};

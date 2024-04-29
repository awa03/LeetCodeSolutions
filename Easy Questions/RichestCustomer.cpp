class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int max =0, curr =0; 
       for(auto& c : accounts){
        curr =0;
        for(auto& s : c){
            curr+=s;
        }
        max = std::max(max, curr);
       }
       return max;
    }
};

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int total = 0;
       unordered_map<int, int> count;
       for(auto& e : nums) count[e]++;
       for(auto& i : count){
        if(i.second == 1) total += i.first;
       }
       return total;
    }
};

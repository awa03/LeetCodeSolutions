class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> count;
        for(auto& n : nums){
            count.insert(n);
        }
        int max = -1;
        for(auto& n : nums){
            if(count.find(n * -1) != count.end()){
                max = std::max(max, *count.find(n));
            }
        }
        return max;
    }
};

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int sum =0; 
       vector<int> sum_v;
       for(auto& e : nums){
        sum+=e;
        sum_v.push_back(sum);
       }
       return sum_v;
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            // prevent duplicates
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k){
                int ttl = nums[i] + nums[j] + nums[k];
                if(ttl > 0){
                    k--;
                }
                else if(ttl < 0){
                    j++;
                }
                else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while(nums[j] == nums[j-1] && j < k){
                        j++;
                    }
                }
            }
        }
        return res;
    }
};

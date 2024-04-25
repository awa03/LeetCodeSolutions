class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        for(int i =0; i < nums.size(); i++){
            const auto& compare = count.find(nums[i]);
            if(compare != count.end() && abs(i - compare->second) <= k){
                return true;
            }
            count[nums[i]] = i;
        }

        return false;
    }
};

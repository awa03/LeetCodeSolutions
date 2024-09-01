class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> cache;
        int index = 0;
        for(int i = 0; i < nums.size(); i++){
            if(cache.find(nums[i]) == cache.end()){
                cache.insert(nums[i]); 
                nums[index] = nums[i];
                index++;        
            }
        }
        return index;
    }
};

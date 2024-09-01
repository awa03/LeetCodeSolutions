class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> cache;
        int index = 0;
        for(int i = 0; i < nums.size(); i++){
            if(cache[nums[i]] < 2){
                nums[index] = nums[i];
               cache[nums[i]] += 1; 
               index++;
            }
        }
        return index;
    }
};

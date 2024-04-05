class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0 ;
        for(; j < nums.size(); j++){
           if(nums[i] == 0 && nums[j] != 0){ 
                std::swap(nums[i], nums[j]);
                i++;
           }
           else if(nums[i] != 0){
            i++;
           }
        }
    }
};

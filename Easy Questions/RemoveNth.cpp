class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0 , j = 0;
       for(; j < nums.size(); j++)
            if(nums[j] != val)
                nums[i++] = nums[j];
        return i;
    }
};

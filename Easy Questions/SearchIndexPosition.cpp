class Solution {
public:
    int searchInsert(vector<int>& nums, int target, int i = 0) {
        if (i >= nums.size()) // Base Case
            return nums.size();
        if(nums[i] >= target) // if pos found
            return i;
        return searchInsert(nums, target, i + 1);
    }
};

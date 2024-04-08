class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Init Low and High Values
       int low = 0, high = nums.size() -1; 
        while(low <= high){
            // find the middle point
            int mid = low + (high - low) /2;
            if(nums[mid] == target) return mid;
            // Because the arr is sorted we can assume that the value is above the mid if <
            else if(nums[mid] < target) low = mid + 1;
            // if its more then we can assume its below
            else high = mid - 1;
        }
        // if the element isnt found
        return -1;
    }
};

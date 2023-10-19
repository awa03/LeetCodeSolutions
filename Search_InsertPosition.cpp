class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty()) {
            return 0; // If the vector is empty, the target should be inserted at index 0.
        }

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid; // return the index.
            } else if (nums[mid] < target) {
                left = mid + 1; // Adjust the left 
            } else {
                right = mid - 1; // Adjust the right 
            }
        }

        return left; // If the target is not found, 'left' is the correct insertion point.
    }
};

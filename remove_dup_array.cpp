class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> unique;
        int count = 0; // Initialize count to zero
        for (int i = 0; i < nums.size(); ++i) {
            bool isDuplicate = false;
            // Check if nums[i] is already in the unique vector
            for (int j = 0; j < unique.size(); ++j) {
                if (unique[j] == nums[i]) {
                    isDuplicate = true;
                    break;
                }
            }
            // If it's not a duplicate, add it to the unique vector and increment count
            if (!isDuplicate) {
                unique.push_back(nums[i]);
                count++;
            }
        }

        // Modify the original vector if necessary
        nums = unique;

        return count;
    }
};

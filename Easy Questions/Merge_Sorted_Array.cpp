class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int index_1 = 0, index_2 = 0; 
    vector<int> nums(m + n); // Initialize nums with appropriate size

    while(index_1 < m && index_2 < n){
        if(nums1[index_1] <= nums2[index_2]){
            nums[index_1 + index_2] = nums1[index_1];
            index_1++;
        }
        else{
            nums[index_1 + index_2] = nums2[index_2];
            index_2++;
        }
    }

    // Copy remaining elements from nums1, if any
    while(index_1 < m){
        nums[index_1 + index_2] = nums1[index_1];
        index_1++;
    }

    // Copy remaining elements from nums2, if any
    while(index_2 < n){
        nums[index_1 + index_2] = nums2[index_2];
        index_2++;
    }

    // Copy merged result back to nums1
    nums1 = nums;
}

};

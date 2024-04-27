class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      if(nums.size() < 2) {
        return nums[0];
      }

      for(int i = 0; i < k; i++){
        for(int j = 0; j < nums.size() -1 -i; j++){
          if(nums[j] > nums[j+1]){
            swap(nums[j], nums[j + 1]);
          }
        }
      }
      return nums[nums.size() - k];
        
    }
};

// This solution performs a bubble sort with k passes in order to find the kth largest element
// This olution is not within the time constraints, however I thought it was an interesting solution
// and rather clever, seeing as it takes advantage of the "end" sorting of bubble sort. 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer-Moore Algorithm
        int num = nums[0];  
        int count = 1; 
        for (int i = 1; i < nums.size(); ++i) { // Iterate through list
            if(count == 0){
                num = nums[i];
                count = 1;
            }
            else if(num == nums[i]){
                count++;
            }
            else {
                count--;
            }
        }
        return num;
                
                
            
    }
};

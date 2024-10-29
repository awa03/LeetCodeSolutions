/*

Given an integer array nums. 
Return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

Examples ----------------
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

Constraints -------------
Time: O(n)
Guaranteed to fit in a 32 bit integer
2 <= nums.length <= 105
-30 <= nums[i] <= 30

Summary ------------------ 
Return an array such that returnArr[i] is the product of all nums but nums[i]

Intuition ----------------
Im interested in solving the O(1) solution.
I think the best way to approach this would first be O(n). 

An easy solution would be the O(N^2) brute force (multiplying each by each != i), but I think I can just find the total
product then divide by each index to find the return values.
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size(), 1);
        int l = 1;
        for(int i =0; i < nums.size(); i++){
            v[i] *= l;
            l *= nums[i];
        }
        int r = 1;
        for(int i=nums.size() - 1; i >= 0; i--){
            v[i] *= r;
            r *= nums[i];
        }
        return v;
    }
};

/*
Input : array of nums
Start : the first index

Each element in the array represents your maximum jump length at that position.

Output : (binary) 
- true : if we can reach last index
- false: if we cannot reach last index

nums = [2,3,1,1,4]
- jump 1 step to reach 3
- jum 3 steps to reach 4

We need a backtracking algorithm. We can search all possible paths from the current case, and see if any of them work.

[2, 3, 0, 1]
- jump 2
- new pos is 0 
- go back to 2
- jump 1 to 3
- jump 3 to 1 (last pos, return true)
*/


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        int size = nums.size();
        
        for (int i = 0; i < size; ++i) {
            // If we can't reach this position, return false
            if (i > farthest) return false;
            // Update the farthest reachable index
            farthest = max(farthest, i + nums[i]);
            // If we can reach or go beyond the last index, return true
            if (farthest >= size - 1) return true;
        }
        
        return false;
    }
};

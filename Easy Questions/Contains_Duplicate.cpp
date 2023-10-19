class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // hash set solution
        unordered_set<int> seen;
        for(int num: nums){ // num = nums[i]
            if(seen.find(num) != seen.end()){
                return true; // if not repeatet
            }
            seen.insert(num); // insert num into seen data
        }
        return false; // else false
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};

// O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> cache;   
        for(int i =0; i < nums.size(); i++){
            auto c = cache.find(target - nums[i]);
            if(c != cache.end()){
                return {c->second, i};
            }
            cache[nums[i]] = i;
        }
        return vector<int>();
    }
};

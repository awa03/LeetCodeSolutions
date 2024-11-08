/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order

find two numbers such that they add up to a specific target number

1 < index1 < index2 < numbers.length

*/
class Solution {
public:
    bool isValid(int iOne, int iTwo, size_t len){
        return (1 <= iOne < iTwo <= len);
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Non const space :( 
       unordered_map<int, int> cache; 
       size_t len = numbers.size();
       for(int i = 0; i < len; i++){
        auto pos = cache.find(target - numbers[i]); 
        if(pos != cache.end() && isValid(pos->second, i, len)){
            return {pos->second +1, i +1};
        }
        cache[numbers[i]] = i;
       }
       return {-1, -1};
    }
};

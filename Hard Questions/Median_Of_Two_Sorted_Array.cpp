// Brute Force Solution --------------------------------
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> allNums;
        for(auto& num : nums1) allNums.push_back(num);
        for(auto& num : nums2) allNums.push_back(num);
        sort(allNums.begin(), allNums.end());
        int n = allNums.size();
        return n%2?allNums[n/2]:(allNums[n/2-1]+allNums[n/2])/2.0;
    }
};

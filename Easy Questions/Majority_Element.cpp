class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candadite = 0;
        for(auto& el : nums){
            if(count == 0){
                candadite = el;
                count = 1;
            }
            else if(candadite == el)
                count++;
            else
                count--;
        }
        return candadite;

    }
};

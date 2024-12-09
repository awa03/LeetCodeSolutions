class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int size = nums.size();    
        vector<int> p(size, 0);

        for(int i =1; i < size; i++){
            p[i] = p[i - 1];
            if((nums[i-1] %2 == 0 && nums[i] %2 == 0) || nums[i -1] %2 != 0 && nums[i] %2 != 0)
                p[i]++;
        }

        vector<bool> res;

        for(auto& q : queries){
            int l = q[0], r= q[1];
            int sC = p[r] - (l > 0 ? p[l] : 0);
            res.push_back(sC == 0);
        }
        return res;
    }
};

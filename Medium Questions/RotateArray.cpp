class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false); 
        cin.tie(nullptr); 
        int n = nums.size();
        k %= n; 
        std::vector<int> n_temp(n);
        for(int i = 0; i < k; ++i) {
            n_temp[i] = nums[n - k + i];
        }
        for(int i = 0; i < n - k; ++i) {
            n_temp[k + i] = nums[i];
        }
        nums = n_temp;
    }
};

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
         for(int i = 0; i <= n; ++i){

            int num = i, total = 0;

            while(num != 0){
                // count ones
                total += num%2;
                num = num/2;
            }
            ans.push_back(total);
         }
       return ans;
    }
};

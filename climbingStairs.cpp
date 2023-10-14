class Solution {
public:
    int climbStairs(int n) {
        if(n<= 2){
            return n;
        } int prev = 1;
        int prev_second = 2;
        int curr = 0;
        for (int i = 3; i <= n; i++) {
            curr = prev + prev_second;
            prev = prev_second;
            prev_second = curr;
        } return curr;
    }
};

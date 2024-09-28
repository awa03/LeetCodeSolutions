use std::cmp::{max, min};

impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut low = i32::MAX; 
        let mut res = 0;
        for i in prices {
            res = max(res, i - low);
            low = min(low, i);
        }
        res
    }
}

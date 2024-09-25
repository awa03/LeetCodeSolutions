impl Solution {
    pub fn my_pow(mut x: f64, mut n: i32) -> f64 {
        if n == 1 { return x; }
        if n == 0 { return 1f64; }
        let mut n = n as i64;

        // n < 0
        if n < 0i64 {
            x = 1f64 / x;
            n = n.abs();
        }

        let mut res: f64 = 1f64;
        while (n > 0) {
            if (n & 1) == 1 {
                res *= x;
            }
            // bit shift
            n >>= 1;
            x *= x;
        }
        res
    }
}

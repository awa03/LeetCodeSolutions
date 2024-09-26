impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
       if x.is_negative() { return false; } 

       let x = x.abs();
       let mut x_mut = x;
       let mut reverse = 0;

       while x_mut > 0 {
        let digit = x_mut % 10;
        reverse = reverse * 10 + digit;
        x_mut /= 10;
       }

       x == reverse
    }
}

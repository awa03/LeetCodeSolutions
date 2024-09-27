impl Solution {
    pub fn count_seniors(details: Vec<String>) -> i32 {
        details.iter().filter(|&info|  {
            let tens = info.as_bytes()[11];
            let ones = info.as_bytes()[12];
            tens > b'6' || (tens == b'6' && ones > b'0')
        }).count() as i32        
    }
}

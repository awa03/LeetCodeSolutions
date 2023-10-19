class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest = nums[0];
        int smallest = nums[0];
        
        // find largest and smallest
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
            if (nums[i] < smallest) {
                smallest = nums[i];
            }
        }
        // find gcd of large and small num
        return gcd(largest, smallest);
    }

    // Euclidian Algorithm
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        else return gcd(b, a % b);
    }
}; 

/*
Complexity
Time complexity:
O(log(min(largest, smallest)))

Space complexity:
Also O(log(min(largest, smallest))
*/

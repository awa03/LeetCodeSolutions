class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1; // get size
        digits[size] +=1; // add one to tail
        helper(digits, size); // call helper
        return digits; 
    }
    void helper(vector<int>& digits, int size){
        if (size == 0) { // if the size is 0 need to add new space
            if (digits[0] >= 10) {
                digits[0] %= 10; 
                digits.insert(digits.begin(), 1); // Add a new leading 1
            }
            return;
        }
        // set EX {0,9} to {1,0}
        if (digits[size] >= 10) { 
            digits[size] %= 10; 
            digits[size - 1] += 1;
        }
        // call helper again
        helper(digits, size - 1);
    }
};

/*
Approach
Recursion - go through every element checking to see if number is greater that 10, if so then increment previous element, and find the mod of the curr element.

Example Input
{9,9,9}

{9, 9, 10}
{9, 10, 0}
{10, 0, 0}
{1, 0, 0, 0}
Complexity
Time complexity:
O(n)O(n)O(n)

Space complexity:
O(n)O(n)O(n)

Code
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1; // get size
        digits[size] +=1; // add one to tail
        helper(digits, size); // call helper
        return digits; 
    }
    void helper(vector<int>& digits, int size){
        if (size == 0) { // if the size is 0 need to add new space
            if (digits[0] >= 10) {
                digits[0] %= 10; 
                digits.insert(digits.begin(), 1); // Add a new leading 1
            }
            return;
        }
        // set EX {0,9} to {1,0}
        if (digits[size] >= 10) { 
            digits[size] %= 10; 
            digits[size - 1] += 1;
        }
        // call helper again
        helper(digits, size - 1);
    }
};


*/

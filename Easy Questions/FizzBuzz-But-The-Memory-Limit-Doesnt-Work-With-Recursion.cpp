class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> count;
        return helper(count, 1, n);
    }

    vector<string> helper(vector<string> v, int n, int m){
        vector<string> result;
        for (int i = n; i <= m; ++i) {
            if (i % 3 == 0 && i % 5 == 0)
                result.push_back("FizzBuzz");
            else if (i % 3 == 0)
                result.push_back("Fizz");
            else if (i % 5 == 0)
                result.push_back("Buzz");
            else
                result.push_back(to_string(i));
            }
        return result;
    };
};

// --------------------- Recursive Fail --------------------- // 

// It does work but fails on one test case... the 9999 one. 
// The stack cannot handle the power of recursion. 

vector<string> helper(vector<string> v, int n, int m) {
    if (n > m) {
        return v; // Terminate recursion when n exceeds m
    } else {
        if (n % 3 == 0 && n % 5 == 0)
            v.push_back("FizzBuzz");
        else if (n % 3 == 0)
            v.push_back("Fizz");
        else if (n % 5 == 0)
            v.push_back("Buzz");
        else
            v.push_back(to_string(n));

        return helper(v, n + 1, m); // Increment n in the recursive call
    }
}

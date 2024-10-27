/*

Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.

The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times.

Input --------------------------------
citations = [3, 0, 6, 1, 5]

Processing ---------------------------
length of array = # of published papers
3 papers with at least 3 citations each 
this is the **majority**

Output -------------------------------
3 

Summary ------------------------------
we are finding the maximum amount of
papers (p) published that corresponds to 
the max amound of citations 

What we need to do --- (Dirty Solution)
1. get the number of papers
2. get the max num of citations
3. decrement until there are (p) >= (size / 2)

So that solution was a little janky so im going to try
a counting sort approach

Conditions ---------------------------
- output >= min(citations)
- output >= papers.size() / 2

Bounds -------------------------------
- n == citations.length
- 1 <= n <= 5000
- 0 <= citations[i] <= 1000
*/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        
        // Step 1: Create a count array for counting citations
        vector<int> count(n + 1, 0);
        
        // Step 2: Populate the count array
        for (int c : citations) {
            if (c >= n) {
                count[n]++;
            } else {
                count[c]++;
            }
        }
        
        // Step 3: Calculate the H-index by traversing from the end
        int total = 0;
        for (int i = n; i >= 0; i--) {
            total += count[i];
            if (total >= i) {
                return i;
            }
        }
        
        return 0;
    }
};
;

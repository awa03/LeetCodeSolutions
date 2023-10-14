// O(size + elementSize) time complexity
// O(1) space complexity

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        } // O(1) case

        int size = matrix.size(); // size of matrix
        int elementSize = matrix[0].size();

        int row = 0; // row index
        int col = elementSize - 1; // col index

        while (row < size && col >= 0) {
            if (matrix[row][col] == target) { // search row and col
                return true;
            } else if (matrix[row][col] > target) { // if its > dec
                col--;
            } else {
                row++; // increment
            } 
        }
        return false;

    }
};

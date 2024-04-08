class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto& e : matrix){
            for(auto& l : e){
                if(l == target) return true;
            }
        }
        return false;
    }
};


// --------------------------------- Solution Within Time Constraints --------------------------------- //

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Store the row and cols
       int rows = matrix.size(); 
       int cols = matrix[0].size();

        // Start at the 0th index
       int start = 0;
       int end = rows * cols - 1;

        // While the entire arr hasnt been searched
        while(start <= end){
            // find middle - binary search
            int mid = start + (end - start) / 2;
            int row_index = mid/cols;
            int col_index = mid%cols;

            // increment if less
            if(matrix[row_index][col_index] < target) start = mid + 1;

            // if found
            else if(matrix[row_index][col_index] == target) return true;
            else end = mid - 1;
        }
        return false;
    }
};

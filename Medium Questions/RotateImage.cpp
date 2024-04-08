class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        
        /* ------------------------------ 

        Visualization -------------------
            1 2 3       1 4 7       7 4 1 
            4 5 6  ->   2 5 8   ->  8 5 2 
            7 8 9       3 6 9       9 6 3 

        */// ------------------------------ 

        // Transpose the matrix
        for(int i = 0; i < row; i++){
            for(int j = 0; j <= i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Swap the columns
        for(int i = 0; i < row; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

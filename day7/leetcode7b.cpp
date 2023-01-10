class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // complete the code
        int m = mat.size();
        int n = mat[0].size();
        if (m * n != r * c) {
            return mat;
        }
        vector<vector<int>> result(r, vector<int>(c));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int k = i * n + j;
                result[k / c][k % c] = mat[i][j];
            }
        }
        return result;
    }
};

/* Explanation of Code: 
    1. This code defines a Solution class that has a single method matrixReshape, which does the following:
    2. Accepts a 2-D vector of integers representing a matrix and two integers r,c as input
    3. Check whether the new reshaped matrix has the same number of elements as the original matrix, if not it returns the original matrix.
    4. Initializes an empty 2-D vector of integers named result which has r rows and c columns.
    5. Uses two nested for loops to iterate through the elements of the original matrix, and then computes the indices of the corresponding element in the reshaped matrix using a calculation based on the index in the original matrix,and assigns it to the result matrix.
    6. Finally, it returns the reshaped matrix
*/

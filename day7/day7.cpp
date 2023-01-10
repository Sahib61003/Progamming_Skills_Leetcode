class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];
            sum += mat[i][n - i - 1];
        }
        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }
        return sum;   
    }
};

/* Explanation of Code:
    This code defines a Solution class that has a single method diagonalSum, 
    which takes in a 2-D vector of integers representing a matrix as input, 
    and returns the sum of the diagonal elements of the matrix.
    The diagonal elements are the elements along the main diagonal (top-left to bottom-right)
    and anti-diagonal (top-right to bottom-left) of the matrix. 
    It uses a for loop to iterate through the rows of the matrix
    and add the diagonal elements to a sum. If the number of rows
    (n) of the matrix is odd, it subtracts the middle element from 
    the sum as it is added twice to the sum. 
    Finally, it returns the sum of the diagonal elements of the matrix.
*/

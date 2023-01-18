class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if (n == 2) return true;
        int x1 = coordinates[0][0], y1 = coordinates[0][1];
        int x2 = coordinates[1][0], y2 = coordinates[1][1];
        for (int i = 2; i < n; i++) {
            int x = coordinates[i][0], y = coordinates[i][1];
            if ((y2 - y1) * (x - x1) != (y - y1) * (x2 - x1)) return false;
        }
        return true;
    }
};

/* Explanation of Code:
    1. We will check if the number of coordinates is 2. If it is, we will return true.
    2. We will store the first two coordinates in x1, y1, x2, y2.
    3. We will traverse the coordinates array from index 2.
    4. We will store the current coordinates in x and y.
    5. We will check if the slope of the line formed by the first two coordinates is equal to the slope of the line formed by the current coordinates and the first coordinate. If it is not, we will return false.
    6. If we reach the end of the loop, we will return true.
*/

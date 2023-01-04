class Solution {
public:
int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
    int min_distance = INT_MAX;
    int min_index = -1;
    for (int i = 0; i < points.size(); i++) {
        int a = points[i][0];
        int b = points[i][1];
        if (a == x || b == y) {
            int distance = abs(a - x) + abs(b - y);
            if (distance < min_distance) {
                min_distance = distance;
                min_index = i;
            }
        }
    }
    return min_index;
}
};
/* Explanation of Code
    initialising min_distance and min_index.
    looping through the points array.
    checking if the x and y coordinates of the point are equal to the given x and y coordinates.
    if yes, calculate the distance between the point and the given coordinates.
    if the distance is less than the minimum distance, update the minimum distance and the minimum index.
    return the minimum index.
*/

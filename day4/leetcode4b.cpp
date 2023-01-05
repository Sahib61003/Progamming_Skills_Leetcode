class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        for (int i = 2; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] != diff) {
                return false;
            }
        }
        return true;
    }
};

/* Explanation of code
    sorting the arrays in ascending order
    initialising diff to the difference between the second and first element
    iterating through the array
    if the difference between the current element and the previous element is not equal to diff, return false
    else return true
*/
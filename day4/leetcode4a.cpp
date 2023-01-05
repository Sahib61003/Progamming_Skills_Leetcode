class Solution {
public:
    int arraySign(vector<int>& nums) {
        int result = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                result = 0;
                break;
            }
            if (nums[i] < 0) {
                result *= -1;
            }
        }
        return result;       
    }
};

/* Explanation of Code:
    initialising result to 1.
    iterating through the array.
    if the element is 0, return 0.
    if the element is negative, multiply result by -1.
    return result.
*/

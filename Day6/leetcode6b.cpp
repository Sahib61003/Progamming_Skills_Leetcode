class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // complete the code
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        for (int i = 0; i < count; i++) {
            nums.push_back(0);
        }
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};

/* Explanation of Code:
    1. The function moveZeroes takes a vector of integers nums as input and rearranges its elements so that all the zeros are moved to the end of the vector.
    2. It declares a variable count initialized to 0, which will be used to store the number of zeros in nums.
    3. It enters a loop that iterates through the elements of nums with the loop variable i. For each element, if it is a zero, count is incremented.
    4. It enters another loop that iterates through the elements of nums with the loop variable i. For each element, if it is a zero, it is removed from nums using the erase function. The loop variable i is also decremented to compensate for the change in the size of nums.
    5. It enters a third loop that iterates count times. For each iteration, it appends a zero to the end of nums using the push_back function.
    6. Finally, it enters a fourth loop that iterates through the elements of nums and prints them to the console using cout.
    7. After all the loops finish executing, the function returns without a value (i.e., it is a void function).
*/

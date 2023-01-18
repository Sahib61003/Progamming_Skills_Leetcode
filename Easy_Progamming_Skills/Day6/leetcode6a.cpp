class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i; j < arr.size(); j++) {
                if ((j - i + 1) % 2 == 1) {
                    for (int k = i; k <= j; k++) {
                        sum += arr[k];
                    }
                }
            }
        }
        return sum;      
    }
};

/* Explanation of Code:
    1. The function sumOddLengthSubarrays takes a vector of integers arr as input.
    2. It declares a variable sum initialized to 0, which will be used to store the sum of all the odd-length subarrays of arr.
    3. It then enters a nested loop structure. The outermost loop iterates through the elements of arr with the loop variable i.
    4. The middle loop also iterates through the elements of arr with the loop variable j. This loop starts at i and continues until the end of arr.
    5. The innermost loop iterates through the elements of the subarray of arr from index i to index j with the loop variable k.
    6. If the length of the subarray (i.e., j - i + 1) is odd, the loop sums the elements of the subarray and adds the sum to sum.
    7. After all the loops finish executing, the function returns the value of sum.
*/

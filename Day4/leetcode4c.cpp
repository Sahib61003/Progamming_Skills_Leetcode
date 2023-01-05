class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        int temp = 0;
        while (n != 1) {
            sum = 0;
            while (n != 0) {
                temp = n % 10;
                sum += temp * temp;
                n /= 10;
            }
            n = sum;
            if (n == 4) {
                return false;
            }
        }
        return true;      
    }
};

/* Explanation of code:
    initialising sum and temp to 0
    iterating through the loop until n is not equal to 1
    initialising sum to 0
    iterating through the loop until n is not equal to 0
    initialising temp to the remainder when n is divided by 10
    adding temp * temp to sum
    dividing n by 10
    initialising n to sum
    if n is equal to 4, return false
    return true
*/

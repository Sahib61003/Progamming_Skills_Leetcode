class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                count++;
            }
            n /= 2;
        }
        return count;
        // explanation of code
        // 1. n > 0 is the condition to stop the loop
        // 2. n % 2 == 1 is the condition to check if the last digit is 1
        // 3. n /= 2 is the operation to remove the last digit 
    }
};

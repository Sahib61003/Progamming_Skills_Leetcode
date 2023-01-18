class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        return product - sum;
    }
};
// basically intialising a sum and product variable
// then while n is greater than 0, we get the last digit    
// then we add the last digit to the sum and multiply it to the product
// then we divide n by 10 to get the next digit
// then we return the product - sum

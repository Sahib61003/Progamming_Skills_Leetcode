class Solution {
public:
    int countOdds(int low, int high) {
        //Function in which we have 2 paramters low and high
        int count = 0;
        for (int i = low; i <= high; i++) {
            // loop will run  from low to high
            if (i % 2 != 0) {
                // if the number is odd then we will increment the count
                count++;
            }
        }
        return count; // returning the count   
    }
};
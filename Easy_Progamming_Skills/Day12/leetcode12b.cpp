class NumArray { 
public:
    vector<int>& preSum; 
    
    NumArray(vector<int>& nums) : preSum(nums) {
        for (int i = 1; i < preSum.size(); ++i)
            preSum[i] += preSum[i-1]; 
    }
    
    int sumRange(int left, int right) {
        if (left == 0) return preSum[right];
        return preSum[right] - preSum[left-1];
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

 /*Explanation of Code:
    * 1. The constructor of the class NumArray is called when the object is created.
    * 2. The constructor takes a vector of integers as input and stores it in the preSum vector.
    * 3. The constructor then calculates the prefix sum of the vector and stores it in the preSum vector.
    * 4. The sumRange function takes two integers as input and returns the sum of the elements in the range [left, right].
    * 5. The sumRange function returns the sum of the elements in the range [left, right] by subtracting the prefix sum of the element at index left-1 from the prefix sum of the element at index right.
    * 6. If left is 0, then the sum of the elements in the range [left, right] is equal to the prefix sum of the element at index right.
    * 7. The sumRange function returns the sum of the elements in the range [left, right].
*/
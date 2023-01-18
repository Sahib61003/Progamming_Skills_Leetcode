class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int i ;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(i = n-1; i >= 2; i--)
        {
            if(nums[i] < nums[i-1] + nums[i-2])
                return nums[i] + nums[i-1] + nums[i-2];
        }
        return 0;
    }
}; 

/* Explanation of Code:
    inititalising i and n.
    storing size of nums in n.
    sorting the array.
    checking if the sum of the last three elements is greater than the last element.
    if yes, return the sum.
    if not, return 0.
*/

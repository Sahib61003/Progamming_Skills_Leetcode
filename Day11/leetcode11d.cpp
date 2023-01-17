class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return flag;
    }
};

/* Explanation of the above Code:
    1. We have to check if the array contains any duplicate elements.
    2. We can do this by using two loops.
    3. We will compare each element with every other element.
    4. If we find any duplicate, we will return true.
    5. Else we will return false.
*/

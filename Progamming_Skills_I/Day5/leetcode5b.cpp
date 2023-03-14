class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            int j = 0;
            for (; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    break;
                }
            }
            
            int k = j + 1;
            for (; k < nums2.size(); k++) {
                if (nums2[k] > nums1[i]) {
                    result.push_back(nums2[k]);
                    break;
                }
            }
            if (k == nums2.size()) {
                result.push_back(-1);
            }
        }
        return result;
        
    }
};

/* Explanation of code:
    1. We will traverse the nums1 array and for each element in nums1, we will traverse the nums2 array.
    2. We will find the index of the element in nums1 in nums2.
    3. We will traverse the nums2 array from the index of the element in nums1 + 1.
    4. We will check if the element in nums2 is greater than the element in nums1. If it is, we will push it to the result array and break out of the loop.
    5. If we reach the end of the loop, we will push -1 to the result array.
    6. We will return the result array.
*/

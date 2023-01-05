class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count = 0;
        int index1 = 0;
        int index2 = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                count++;
                if (count == 1) {
                    index1 = i;
                }
                if (count == 2) {
                    index2 = i;
                }
            }
        }
        if (count == 0) {
            return true;
        }
        if (count == 2) {
            if (s1[index1] == s2[index2] && s1[index2] == s2[index1]) {
                return true;
            }
        }
        return false;      
    }
};

/* Explanation of code:
    initialising count to 0
    initialising index1 and index2 to 0
    iterating through the string
    if the characters at the current index are not equal, increment count
    if count is 1, initialising index1 to i
    if count is 2, initialising index2 to i
    if count is 0, return true
    if count is 2, if the characters at index1 and index2 of s1 are equal to the characters at index2 and index1 of s2, return true
    else return false
*/
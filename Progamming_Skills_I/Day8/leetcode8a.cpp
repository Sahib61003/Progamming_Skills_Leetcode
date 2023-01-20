class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
        int i=0; int j=0;
        while (i<word1.size() && j<word2.size()){
            merged+= word1[i];
            merged+= word2[j];
            i++; j++;
        }
        while (i<word1.size()){
            merged+= word1[i];
            i++;
        }
        while (j<word2.size()){
            merged+= word2[j];
            j++;
        }
        return merged;
    }
};

/* Explanation of Code:
    1. Create a string called merged to store the merged string.
    2. Create two pointers i and j to iterate through the two strings.
    3. While both i and j are less than the size of the strings, add the characters at the pointers to the merged string.
    4. After the while loop, if i is less than the size of word1, add the remaining characters to the merged string.
    5. If j is less than the size of word2, add the remaining characters to the merged string.
    6. Return the merged string.
*/

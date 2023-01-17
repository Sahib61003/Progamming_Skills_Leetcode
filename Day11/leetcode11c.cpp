class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       if(s == t) return true;
       return false;
    }
};

/*Explanation of Code:
   1. We have to check if the two strings are anagrams of each other.
   2. We can do this by sorting the strings and then comparing them.
   3. If they are equal, we return true, else we return false.
*/
        

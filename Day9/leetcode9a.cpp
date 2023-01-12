class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.length();i++){
            if(str[i]>='A' and str[i]<='Z'){       
                str[i]=((char)(str[i]-'A'+'a'));  
            }
        }
        return str;                              
    }
};

/*Explanation of Code:
  Check if the character is uppercase or not.
  Convert the uppercase character to lowercase.
  Return the string.
  */

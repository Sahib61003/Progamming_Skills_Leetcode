class Solution {
public:
    string interpret(string command) {
        string res = "";
        for (int i = 0; i < command.size(); i++) {
            auto curr = command[i];
            if (i && curr == ')' && command[i-1] == '(') res += 'o';
            if (curr == '(' || curr == ')') continue;
            res += curr;
        }
        return res;
    }
};

/* Explanation of Code: 
    1. We iterate through the string and check if the current character is a 'G' or a '()' or a '(al)'.
    2. If it is a 'G' we add it to the result string.
    3. If it is a '()' we add 'o' to the result string.
    4. If it is a '(al)' we add 'al' to the result string.
    5. We return the result string.
*/

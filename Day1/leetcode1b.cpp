

class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0];  
        int min = salary[0];
        int sum = 0;
        for (int i = 0; i < salary.size(); i++) { 
            if (salary[i] > max) {
                max = salary[i];
            }
            if (salary[i] < min) {
                min = salary[i];
            }
            sum += salary[i];
        }
        return (sum - max - min) / (salary.size() - 2.0);    
    }
};
// Explanation of Code
// 1. The first line of the code is the class name. The class name is Solution.
// 2. The second line of the code is the function name. The function name is average.
// 3. The third line of the code is the function signature. The function signature is average(vector<int>& salary).
// 4. The fourth line of the code is the function body. The function body is the code between the curly braces.
// 5. The fifth line of the code is the variable declaration. The variable declaration is int max = salary[0].
// 6. The sixth line of the code is the variable declaration. The variable declaration is int min = salary[0].
// 7. The seventh line of the code is the variable declaration. The variable declaration is int sum = 0.
// 8. The eighth line of the code is the for loop. The for loop is for (int i = 0; i < salary.size(); i++).
// 9. The ninth line of the code is the if statement. The if statement is if (salary[i] > max).
// 10. The tenth line of the code is the assignment statement. The assignment statement is max = salary[i].
// 11. The eleventh line of the code is the if statement. The if statement is if (salary[i] < min).
// 12. The twelfth line of the code is the assignment statement. The assignment statement is min = salary[i].
// 13. The thirteenth line of the code is the assignment statement. The assignment statement is sum += salary[i].
// 14. The fourteenth line of the code is the return statement. The return statement is return (sum - max - min) / (salary.size() - 2.0).

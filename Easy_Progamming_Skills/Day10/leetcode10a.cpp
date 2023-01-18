/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = head->val;
        while (head->next != NULL) {
            num = (num << 1) | head->next->val;
            head = head->next;    
        }
        return num;
    }
};

/* Explanation of Code:
    1. Code starts with the definition of the ListNode structure.
    2. Then it is the definition of the Solution class.
    3. Then we are defining the getDecimalValue function.
    4. Declaration of the num variable and assignment of head of val to the num variable.
    5. Starting with the while loop.
    6. The while loop will run until the head->next is not equal to NULL.
    7. The num variable is assigned the value of the num variable shifted left by 1 and then ORed with the head->next->val.
    8. The head variable is assigned the value of the head->next.
    9. Then we return num.
*/

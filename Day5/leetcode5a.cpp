class Solution {
public:
    vector<int> preorder(Node* root) {
        // next step
        vector<int> res;
        if (root == NULL) return res;
        stack<Node*> s;
        s.push(root);
        // next step
        while (!s.empty()) {
            Node* node = s.top();
            s.pop();
            res.push_back(node->val);
            // next step
            for (int i = node->children.size() - 1; i >= 0; i--) {
                s.push(node->children[i]);
            }
        }
        return res;
    }
};

/* Explanation of Code:
    1. We will create a stack and push the root node to the stack.
    2. We will traverse the stack until it is empty.
    3. We will pop the top element from the stack and push it to the result array.
    4. We will traverse the children array of the node in reverse order and push each element to the stack.
    5. We will return the result array.
*/

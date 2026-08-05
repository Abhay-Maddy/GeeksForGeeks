/* Structure of Binary Tree Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        
        vector<int> ans;
        
        if (root == NULL)
            return ans;
            
        queue<Node*> q;
        bool leftToRight = true;
        q.push(root);
        
        while (!q.empty()) {

            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++) {

                Node* temp = q.front();
                q.pop();

                int index = leftToRight ? i : size - 1 - i;
                level[index] = temp->data;

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            for (int x : level)
                ans.push_back(x);

            leftToRight = !leftToRight;
        }
        
        return ans;
    }
};
/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
public:
    void travers(Node* root, vector<int>& ans) {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return;
        }

        travers(root->left, ans);
        travers(root->right, ans);
    }

    vector<int> boundaryTraversal(Node* root) {

        vector<int> ans;

        if (root == NULL)
            return ans;

        if (root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return ans;
        }

        ans.push_back(root->data);

        Node* curr = root->left;
        while (curr) {
            if (curr->left || curr->right)
                ans.push_back(curr->data);

            if (curr->left)
                curr = curr->left;
            else
                curr = curr->right;
        }

        travers(root, ans);

        vector<int> temp;
        curr = root->right;

        while (curr) {
            if (curr->left || curr->right)
                temp.push_back(curr->data);

            if (curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }

        for (int i = temp.size() - 1; i >= 0; i--)
            ans.push_back(temp[i]);

        return ans;
    }
};
/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int height(Node* root) {
        if (root == NULL)
            return -1;

        int left = height(root->left);
        int right = height(root->right);

        return max(left, right) + 1;
    }
};
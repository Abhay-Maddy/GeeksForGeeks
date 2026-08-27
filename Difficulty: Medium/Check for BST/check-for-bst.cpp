/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
public:

    bool solve(Node* root, long long minVal, long long maxVal) {

        if (!root)
            return true;

        if (root->data <= minVal || root->data >= maxVal)
            return false;

        return solve(root->left, minVal, root->data) &&
               solve(root->right, root->data, maxVal);
    }

    bool isBST(Node* root) {
        return solve(root, LLONG_MIN, LLONG_MAX);
    }
};
/*Structure of binary tree Node 
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
    pair<int, int> diamerterfast(Node* root) {
        if (root == NULL) {
            return {0, 0};
        }

        pair<int, int> left = diamerterfast(root->left);
        pair<int, int> right = diamerterfast(root->right);

        int leftDiameter = left.first;
        int rightDiameter = right.first;

        int height = max(left.second, right.second) + 1;

        int currDiameter = left.second + right.second;

        int ans = max({leftDiameter, rightDiameter, currDiameter});

        return {ans, height};
    }

    int diameter(Node* root) {
        return diamerterfast(root).first;
    }
};
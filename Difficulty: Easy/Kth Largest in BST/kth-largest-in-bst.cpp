/* Structure of a Binary Tree Node
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
    int solve(Node* root,int& count, int k){
        if(!root) return -1;
        
        int right = solve(root -> right,count,k);
        
        if(right != -1){
            return right;
        }
        
        count++;
        if(count == k) return root -> data;
        
        return solve(root -> left,count,k);
    }
    int kthLargest(Node *root, int k) {
        
        int count = 0;
        
        return solve(root,count,k);
    }
};
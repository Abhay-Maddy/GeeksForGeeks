/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int minValue(Node* root) {
        
        if(!root)
            return -1;
            
        if(!root -> left){
            return root -> data;
        }
        
        int left = minValue(root -> left);
        
        return left;
    }
};
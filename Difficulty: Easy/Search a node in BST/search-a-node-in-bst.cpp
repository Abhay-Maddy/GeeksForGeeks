/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        if(root == NULL){
            return false;
        }
        
        if(root -> data == key){
            return true;
        }
        
        bool left = search(root -> left, key);
        bool right = search(root -> right, key);
        
        
        return left || right;
        
    }
};
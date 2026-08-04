/* Structure of binary tree node
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
    pair<bool,int> balancedFast(Node* root){
        
        if(!root) return {true, 0};
        
        pair<bool,int> left = balancedFast(root -> left);
        pair<bool,int>right = balancedFast(root -> right);
        
        int height = max(left.second, right.second) + 1;
        
        if(abs(left.second - right.second) <= 1 && left.first && right.first){
            return {true, height};
        }
        
        return {false,height};
    }
    
    bool isBalanced(Node* root) {
        return balancedFast(root).first;
    }
};
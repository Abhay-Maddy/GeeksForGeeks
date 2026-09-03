/* Structure for tree and linked list
class Node {
  public:
    int data;
    Node *left, *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
  
    Node* prev = NULL;
    
    void solve(Node* root, Node*& head){
        if(!root){
            return;
        }
        
        solve(root -> left,head);
        
        if(!prev){
            head = root;
        }else{
            root -> left = prev;
            prev -> right = root;
            
        }
        
        prev = root;
        
        solve(root -> right,head);
    }
    Node* treeToDLL(Node* root) {
        
        Node* head = NULL;
        
        solve(root,head);
        
        return head;
        
    }
};
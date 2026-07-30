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
    vector<int> reverseLevelOrder(Node *root) {
        queue<Node*> q;
        stack<int> s;
        vector<int> ans;
        
        if (root == NULL)
            return ans;
        
        q.push(root);
        
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            
            s.push(temp -> data);
            
            if(temp -> right != NULL){
                q.push(temp -> right);
            }
            
            if(temp -> left != NULL){
                q.push(temp -> left);
            }
        }
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
    }
};
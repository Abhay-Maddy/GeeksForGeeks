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
    vector<int> rightView(Node *root) {
        vector<int> ans;
        
        if(!root) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int size= q.size();
            
            for(int i = 0; i < size; i++){
                
                Node* temp = q.front();
                q.pop();
                
                if(i == size - 1)
                    ans.push_back(temp -> data);
                    
                if(temp -> left)
                    q.push(temp -> left);
                    
                if(temp -> right)
                    q.push(temp -> right);
            }
        }
    }
};
/* Structure of Binary Tree Node
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
    vector<int> leftView(Node *root) {
        vector<int> ans;
        if(!root) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            
            for(int i = 0; i < size; i++){
                
                Node* tempNode = q.front();
                q.pop();
                
                if (i == 0)
                    ans.push_back(tempNode->data);
                    
                if(tempNode -> left) q.push(tempNode -> left);
                if(tempNode -> right) q.push(tempNode -> right);
                
            }
        }
        return ans;
    }
};
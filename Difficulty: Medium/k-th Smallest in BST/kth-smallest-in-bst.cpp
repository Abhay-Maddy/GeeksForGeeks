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
  
    int solve(Node* root,int k,int& ans){
        if(!root) return -1;
        
        int left = solve(root -> left,k, ans);
        
        if (left != -1)
            return left;
                    
        ans++;
        
        if(ans == k) return root -> data;
        
        return solve(root -> right,k,ans);;
    }
    
    int kthSmallest(Node *root, int k) {
        int ans = 0;
        
        return solve(root,k,ans);
    }
};
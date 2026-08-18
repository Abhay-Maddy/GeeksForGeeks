/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    void solve(Node* root, int sum, int height, int& maxsum, int &maxheight){
        
        if(!root){
            
            if(maxheight < height){
                maxsum = sum;
                maxheight = height;
            }
            
            if(height == maxheight){
                maxsum = max(sum,maxsum);
            }
            
            return;
        }
        
        sum += root -> data;
        
        solve(root -> left, sum,height + 1, maxsum, maxheight);
        solve(root -> right, sum,height + 1, maxsum, maxheight);
        
        return;
    }
    
    int sumOfLongRootToLeafPath(Node *root) {
        
        int sum = 0;
        int height = 0;
        
        int maxsum = INT_MIN;
        int maxheight = 0;
        
        solve(root,sum,height,maxsum,maxheight);
        
        return maxsum;
    }
};
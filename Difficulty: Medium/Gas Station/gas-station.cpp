class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        
        queue<int> q;
        int avl = 0;
        int start = 0;
        
        int req = 0;
        
        for(int i = 0; i < gas.size(); i++){
            avl += gas[i];
            if(avl >= cost[i]) {
                avl -= cost[i];
            }else{
                req += cost[i] - avl;
                start = i + 1;
                avl = 0;
            }
        }
        
        if(req <= avl) return start;
        
        return -1;
        
    }
};
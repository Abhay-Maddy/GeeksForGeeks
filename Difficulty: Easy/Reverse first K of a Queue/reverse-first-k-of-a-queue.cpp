class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        stack<int> s;
        int n = q.size();
        
        if(n  < k) return q;
        
        for(int i = 0; i < k; i++){
            s.push(q.front());
            q.pop();
        }
        
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        
        for(int i = 0; i < n - k ; i++){
            q.push(q.front());
            q.pop();
        }
        
        return q;
    }
};
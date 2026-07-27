class Solution {
  public:
    void insertAtBottom(stack<int>& st, int a){
        if(st.empty()){
            st.push(a);
            return;
        }
        
        int temp = st.top();
        st.pop();
        
        insertAtBottom(st,a);
        
        st.push(temp);
        
        return;
        
    }
    
    void reverseStack(stack<int> &st) {
        if(st.empty()) return;
        
        int a = st.top();
        st.pop();
        
        reverseStack(st);
        
        insertAtBottom(st,a);
        
        return;
    }
};
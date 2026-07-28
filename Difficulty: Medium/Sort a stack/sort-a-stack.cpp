class Solution {
  public:
    void sortSt(stack<int> & st, int x){
        if(st.empty() || st.top() < x){
            st.push(x);
            return;
        }
        
        int temp = st.top();
        st.pop();
        
        sortSt(st,x);
        
        st.push(temp);
        return;
        
        
    }
    void sortStack(stack<int> &st) {
        if(st.empty()) return;
        
        int x = st.top();
        st.pop();
        
        sortStack(st);
        
        sortSt(st,x);
        
        return;
    }
};

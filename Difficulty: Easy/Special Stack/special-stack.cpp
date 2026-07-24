void push(stack<int>& s, int a) {
    
    s.push(a);
}

bool isFull(stack<int>& s, int n) {
    return s.size() == n;
}

bool isEmpty(stack<int>& s) {
    return s.empty();
}

int pop(stack<int>& s) {
    
    if(isEmpty(s)) return -1;
    
    int element = s.top();
    s.pop();
    return element;
}

int getMin(stack<int>& s) {
    if(isEmpty(s)) return INT_MAX;
    
    int element = s.top();
    s.pop();
    
    int mn = min(element, getMin(s));
    
    s.push(element);
    
    return mn;
    
}
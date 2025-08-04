class MinStack {
public:
    stack<int>st;
    vector<int>ans; 
   
    MinStack() {
        
    }
    
    void push(int val) {
        if(ans.empty()){
            ans.push_back(val);
        }
        else{
            ans.push_back(min(ans.back(),val));
        }
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()){
        st.pop();
        ans.pop_back();
        }
    }
    
    int top() {
        int ele =st.top();
        return ele;
    }
    
    int getMin() {
        return ans.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
class MinStack {
private:
    vector<vector<int>> st;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        // int mini = getMin();
        // if(st.empty() || mini > value) mini = value;
        int mini = st.empty() ? value : min(value , st.back()[1]);
        st.push_back({value , mini});
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.empty() ? -1 : st.back()[0]; //if not empty , then return value
    }
    
    int getMin() {
        return st.empty() ? -1 : st.back()[1]; //if not empty , then return mini
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
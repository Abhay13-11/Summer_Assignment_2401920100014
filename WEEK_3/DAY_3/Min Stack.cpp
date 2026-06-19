class MinStack {
public:
    int min1=INT_MAX;
    int min2=INT_MAX;
    MinStack() {    
    }
    stack<int> st;
    stack<int> minstk;
    void push(int val) {
        st.push(val);
        if(minstk.empty() || minstk.top()>=val)
        {
            minstk.push(val);
        }
        }
    void pop() {
          if(st.top()==minstk.top())
          {
            minstk.pop();
          }
          st.pop();     
    } 
    int top() {
       return st.top();      
    }  
    int getMin() {
        return minstk.top();      
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
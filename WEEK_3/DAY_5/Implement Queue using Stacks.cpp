class MyQueue {
public:
int size=0;
    MyQueue() {
        
    }
    stack<int> st1;
    stack<int> st2;
    
    void push(int x) {

        st1.push(x);
        size++;
    }
    
    int pop() {
        if(st2.empty())
        {
            while(st1.size()!=0)
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        
        int temo=st2.top();
        st2.pop();
        size--;
        return temo;
        
    }
    
    int peek() {
        if(st2.empty())
        {
            while(st1.size()!=0)
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        if(st2.empty())
        {
            return 0;
        }
        
        return st2.top();
    }
    
    bool empty() {
        if(size==0)
        {
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
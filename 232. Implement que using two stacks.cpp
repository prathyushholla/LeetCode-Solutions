class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(stack1.empty()){
            stack1.push(x);
        }
        else{
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
                
            }
            stack1.push(x);
            while(!stack2.empty()){
                stack1.push(stack2.top());
                stack2.pop();
            }
        }
    }
    
    int pop() {
        int x = stack1.top(); 
        stack1.pop();
        return x; 
    }
    
    int peek() {
        return stack1.top();
    }
    
    bool empty() {
        if(stack1.empty()){
            return true; 
        }
        return false;
    }
private: 
stack<int> stack1;
stack<int> stack2; 
};

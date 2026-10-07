class MinStack {
private:
        stack<int> mainStack;
        stack<int> minSt;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        mainStack.push(val);
        if (minSt.empty()) minSt.push(val);
        else minSt.push (min(val,minSt.top()));
    }
    
    void pop() {
        mainStack.pop();
        minSt.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

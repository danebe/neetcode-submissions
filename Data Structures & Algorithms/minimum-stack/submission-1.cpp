class MinStack {
private: 
        stack<int>minSt;
        stack<int>mainStack;
public:  
    MinStack() {}
    void push(int value) {
        mainStack.push(value);
        if (minSt.empty()) minSt.push(value);
        else  minSt.push(min(value,minSt.top()));
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

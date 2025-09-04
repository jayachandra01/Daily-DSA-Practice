class MinStack {
private:
    stack<int> st;      // normal stack for values
    stack<int> minSt;   // stack for tracking minimums
    
public:
    MinStack() {
        // Constructor initializes empty stacks
    }
    
    void push(int val) {
        st.push(val);  // push value into normal stack
        
        // Push into minSt if it's empty OR val is <= current minimum
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        if (st.top() == minSt.top()) {
            // If top of both stacks same → remove from minSt too
            minSt.pop();
        }
        st.pop();  // Always pop from normal stack
    }
    
    int top() {
        return st.top();  // Just return top of main stack
    }
    
    int getMin() {
        return minSt.top();  // Return current minimum
    }
};

https://leetcode.com/problems/min-stack/description/
class MinStack {
public:
    stack<int>st,minst;//2 stacks
    MinStack() {
        
    }
    
    void push(int val) {
        if(minst.empty()||val<=minst.top()){
            minst.push(val);
            //if minstack is empty or inserted value <= top of min stack
        }
        st.push(val);
        //val pushed in stack.
    }
    
    void pop() {
        if(st.top()==minst.top()){
            minst.pop();
            //if st top has the same value as top of minst then pop top of minst.
            //later pop top of st.
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
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
 /*
 class MinStack {
public:
    stack<int> st,minst;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minst.empty() || val<=minst.top()){
            //if min stack is empty or inserted val <= top of min stack.
            minst.push(val);
        }
        st.push(val);//val pushed in st.
    }
    
    void pop() {
        if(st.top() == minst.top()){
            minst.pop();
            //if st's top has the same value as top of minst
            //then we pop top of minst.
            //and later also pop top of st as in below lines.
        }
        st.pop();   
        }
    
    int top() {
        return st.top();//top of st
    }
    
    int getMin() {
        return minst.top();//top of minst
    }
};
 */
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

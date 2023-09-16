// Problem - https://leetcode.com/problems/implement-queue-using-stacks/
// Runtime: 3 ms
// Memory Usage: 7.47 MB

#include <stack>

class MyQueue {
private:
    std::stack<int> stackMain;
    std::stack<int> stackAux;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while (!stackMain.empty()) {
            stackAux.push(stackMain.top());
            stackMain.pop();
        }
        stackMain.push(x);
        while (!stackAux.empty()) {
            stackMain.push(stackAux.top());
            stackAux.pop();
        }
    }
    
    int pop() {
        int frontElement = stackMain.top();
        stackMain.pop();
        return frontElement;
    }
    
    int peek() {
        return stackMain.top();
    }
    
    bool empty() {
        return stackMain.empty();
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
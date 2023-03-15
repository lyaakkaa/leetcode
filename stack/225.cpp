#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:

    queue <int> q1;
    queue <int> q2;
    int size = -1;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        size++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
        
    }
    
    int pop() {
        int val = q1.front();
        size--;
        q1.pop();
        return val;
    }
    
    int top() {
        return q1.front();
        
    }
    
    bool empty() {
        cout << size << endl;
        if(size == -1)
            return true;
        
        return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
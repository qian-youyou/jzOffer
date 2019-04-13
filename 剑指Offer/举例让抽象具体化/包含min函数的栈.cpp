class Solution {
public:
    void push(int value) {
        StackInt.push(value);
        if(StackMin.empty())
            StackMin.push(value);
        else if(StackMin.top()<value)
            StackMin.push(StackMin.top());
        else
            StackMin.push(value);
    }
    void pop() {
        if(!StackInt.empty())
        {
            StackInt.pop();
            StackMin.pop();
        }
    }
    int top() {
        return StackInt.top();
    }
    int min() {
        return StackMin.top();
    }
private:
    stack<int> StackInt;
    stack<int> StackMin;
};

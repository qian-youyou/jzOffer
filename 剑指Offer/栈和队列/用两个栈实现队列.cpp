class Solution
{
public:
    void push(int node) {
        if(stack1.empty()){
            while(!stack2.empty()){
                stack1.push(stack2.top());
                stack2.pop();
            }
        }
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if(!stack2.empty()){
            int ans =  stack2.top();
            stack2.pop();
            return ans;
        }
        return 0;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

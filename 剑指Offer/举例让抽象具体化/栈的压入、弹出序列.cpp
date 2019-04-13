class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> s;
        int len = pushV.size(), i = 0, j = 0;
        while(i < len && j < len){
            while(s.empty() || i < len && s.top() != popV[j]){
                s.push(pushV[i++]);
            }
            while(j < len && !s.empty() && s.top() == popV[j]){
                s.pop();
                ++j;
            }
        }
        if(j < len){
            return false;
        }
        return true;
    }
};

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int>v;
        priority_queue<int>que;
        int len = input.size();
        if(len < k){
            return v;
        }
        for(int i = 0; i < len; ++i){
            que.push(input[i]);
            while(que.size() > k){
                que.pop();
            }
        }
        while(!que.empty()){
            v.push_back(que.top());
            que.pop();
        }
        return v;
    }
};

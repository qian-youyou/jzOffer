class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size){
        deque<int>dq, vis;
        vector<int>v;
        for(unsigned int i = 0; i < num.size(); ++i){
            if(!vis.empty() && i - vis.front() >= size){
                dq.pop_front();
                vis.pop_front();
            }
            while(!dq.empty() && dq.back() <= num[i]){
                    dq.pop_back();
                    vis.pop_back();
            }
            dq.push_back(num[i]);
            vis.push_back(i);
            if(i >= size - 1){
                v.push_back(dq.front());
            }
        }
        return v;
    }
};

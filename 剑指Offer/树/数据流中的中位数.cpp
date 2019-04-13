class Solution {
public:
    void Insert(int num)
    {
        if(max_que.size() == min_que.size()){
            if(max_que.empty() || max_que.top() >= num || min_que.top() >= num){
                max_que.push(num);
            }else{
                max_que.push(min_que.top());
                min_que.pop();
                min_que.push(num);
            }
        }else{
            if(max_que.top() >= num){
                min_que.push(max_que.top());
                max_que.pop();
                max_que.push(num);
            }else{
                min_que.push(num);
            }
        }
    }

    double GetMedian()
    {
        if(max_que.size() == min_que.size()){
            return (min_que.top() + max_que.top()) / 2.0;
        }else{
            return max_que.top();
        }
    }
private:
    priority_queue<int, vector<int>, greater<int> >min_que;
    priority_queue<int>max_que;
};

class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        priority_queue<int, vector<int>, greater<int> >que;
        que.push(1);
        int i = 0;
        int MAXN = 0;
        set<int>s;
        while(!que.empty()){
            int ans = que.top();
            que.pop();
            if(s.count(ans)||ans < 0){
                continue;
            }
            s.insert(ans);
            ++i;
            s.insert(ans);
            if(i == index){
                return ans;
            }
            if(que.size() < index){
                que.push(ans*2);
                que.push(ans*3);
                que.push(ans*5);
                MAXN = max(MAXN, ans * 5);
            }
            else{
                if(ans*2<MAXN){
                    que.push(ans*2);
                }
                if(ans*3<MAXN){
                    que.push(ans*3);
                }
                if(ans*5<MAXN){
                    que.push(ans*5);
                }
            }
        }
        return 0;
    }
};

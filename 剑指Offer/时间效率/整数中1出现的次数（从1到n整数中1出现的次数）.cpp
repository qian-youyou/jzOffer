class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int cnt = n, ans = 0, res = 1;
        while(cnt){
            if(cnt % 10){
                if(cnt % 10 > 1){
                    ans += res;
                }else{
                    ans += n % res + 1;
                }

            }
            cnt /= 10;
            ans += cnt * res;
            res *= 10;
        }
        return ans;
    }
};

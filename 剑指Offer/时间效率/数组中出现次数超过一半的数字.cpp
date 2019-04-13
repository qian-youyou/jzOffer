class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        const int len = numbers.size();
        if(!len){
            return 0;
        }
        int ans = numbers[0], cnt = 1;
        for(int i = 1; i < len; ++i){
            if(numbers[i] == ans){
                ++cnt;
            }else{
                if(!cnt){
                    ans = numbers[i];
                    cnt = 1;
                }
                --cnt;
            }
        }
        cnt = 0;
        for(int i = 0; i < len; ++i){
            if(numbers[i] == ans){
                ++cnt;
            }
        }
        if(cnt <= len / 2){
            ans = 0;
        }
        return ans;
    }
};

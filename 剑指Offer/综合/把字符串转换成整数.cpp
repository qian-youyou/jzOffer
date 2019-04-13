class Solution {
public:
    int StrToInt(string str) {
        int ans = 0;
        int flag = 0;
        for(int i = 0; i < str.length(); i++){
            while(str[i] == ' '){
                continue;
            }
            if(str[i] <= '9' && str[i] >= '0'){
                ans *= 10;
                ans += str[i] - '0';
            }else{
                if(!flag){
                    if(str[i] == '-'){
                        flag = -1;
                    }else if(str[i] == '+'){
                        flag = 1;
                    }else{
                        return 0;
                    }
                }else{
                    return 0;
                }
            }
        }
        if(flag){
            ans *= flag;
        }
        return ans;
    }
};

class Solution {
public:
    bool isNumeric(char* string)
    {
        int len = strlen(string);
        int cur = 0;
        bool a = false, b = false, c = false, ans = true;
        while(string[cur] == ' '){
            ++cur;
        }
        for(; cur < len; ++cur){
            if(string[cur] >= '0' && string[cur] <= '9'){
                ans = true;
                a = true;
            }else if(string[cur] == '+' || string[cur] == '-'){
                if(a){
                    return false;
                }else{
                    a = true;
                }
            }else if(string[cur] == 'e' || string[cur] == 'E'){
                if(b){
                    return false;
                }else{
                    b = true;
                    a = false;
                    ans = false;
                }
            }else if(string[cur] == '.'){
                if(c || b){
                    return false;
                }else{
                    c = true;
                    ans = false;
                }
            }else{
                return false;
            }
        }
        return ans;
    }
};

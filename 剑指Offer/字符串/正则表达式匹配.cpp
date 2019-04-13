class Solution {
public:
    bool match(char* str, char* pattern){
        if(str[0] == 0 && pattern[0] == 0){
            return true;
        }else if(pattern[0] && pattern[1] == '*' && match(str, pattern + 2)){
                return true;
        }else if(str[0] && pattern[0] == '.' || str[0] == pattern[0]){
            if(match(str + 1, pattern + 1)){
                return true;
            }else if(pattern[1] == '*' && match(str + 1, pattern)){
                return true;
            }
        }
        return false;
    }
};

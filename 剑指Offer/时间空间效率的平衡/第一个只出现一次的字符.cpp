class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        map<char, int>m;
        for(int i = 0; i < str.length(); i++){
            m[str[i]]++;
        }
        for(int i = 0; i < str.length(); i++){
            if(m[str[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};

class Solution {
public:
    string LeftRotateString(string str, int n) {
        unsigned int len = str.size();
        if(!len){
            return "";
        }
        n %= len;
        string str2 = str.substr(size_t(n)) + str.substr(0, n);
        return str2;
    }
};

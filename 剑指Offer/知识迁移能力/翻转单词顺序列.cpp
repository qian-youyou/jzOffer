class Solution {
public:
    string ReverseSentence(string str) {
        stack<string>s;
        istringstream istring;
        istring.str(str);
        string tmp;
        while(istring >> tmp){
            s.push(tmp);
        }
        if(!s.empty()){
            s.pop();
        }else{
            if(str.size()){
                return str;
            }
        }
        while(!s.empty()){
            tmp += " " + s.top();
            s.pop();
        }
        return tmp;
    }
};

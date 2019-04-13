class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int len = data.size();
        bool flag = false;
        map<int, int>m;
        for(int i = 0; i < len; ++i){
            m[data[i]]++;
        }
        for(int i = 0; i < len; ++i){
            if(m[data[i]] == 1){
                if(flag){
                    *num2 = data[i];
                }else{
                    flag = true;
                    *num1 = data[i];
                }

            }
        }
    }
};

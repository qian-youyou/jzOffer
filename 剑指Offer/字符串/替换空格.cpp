class Solution {
public:
	void replaceSpace(char *str,int length) {
        int cnt = 0;
        for(int i = 0; i < length; i++){
            if(str[i] == ' '){
                cnt++;
            }
        }
        int j = length + cnt * 2;
        for(int i = length; j>=0 && i >= 0; i--){
            if(str[i] != ' '){
                str[j--] = str[i];
            }
            else{
                str[j--] = '0';
                str[j--] = '2';
                str[j--] = '%';
            }
        }
	}
};

class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.empty()){
            return false;
        }
        int cnt = 0, cur = 0;
        sort(numbers.begin(), numbers.end());
        for(int i = 0; i < numbers.size(); ++i){
            if(numbers[i] == 0){
                ++cnt;
            }else{
                if(cur){
                    while(numbers[i] != cur + 1){
                        cur += 1;
                        --cnt;
                        if(cnt < 0){
                            return false;
                        }
                    }
                    cur += 1;
                }
                else{
                    cur = numbers[i];
                }
            }
        }
        return true;
    }
};

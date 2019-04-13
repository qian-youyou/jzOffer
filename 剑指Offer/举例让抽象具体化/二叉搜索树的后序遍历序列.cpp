class Solution {
public:
    bool check(vector<int> &sequence, int left, int right){
        bool flag = false;
        if(left >= right){
            return true;
        }
        int mindle = left;
        int cur = sequence[right];
        for(int i = left; i < right; ++i){
            if(!flag && sequence[i] > cur){
                flag = true;
                mindle = i;
            }else if(flag && sequence[i] < cur){
                return false;
            }
        }
        flag = check(sequence, left, mindle - 1) && check(sequence, mindle, right - 1);
        return flag;
    }
    bool VerifySquenceOfBST(vector<int> sequence) {
        const int len = sequence.size();
        if(!len){
            return false;
        }
        return check(sequence, 0, len - 1);
    }
};

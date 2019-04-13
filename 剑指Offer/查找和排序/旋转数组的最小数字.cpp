class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int len = rotateArray.size();
        if(!len){
            return 0;
        }
        else if (len == 1){
            return rotateArray[0];
        }
        for(int i = 1; i < len; i++){
            if(rotateArray[i] < rotateArray[i - 1]){
                return rotateArray[i];
            }
        }
        return 0;
    }
};

class Solution {
public:
    int jumpFloor(int number) {
        if(number < 1){
            return 0;
        }
        vector<int>v(number + 1);
        v[0] = 1;
        v[1] = 1;
        for(int i = 2; i <= number; i++){
            v[i] = v[i-1] + v[i-2];
        }
        return v[number];
    }
};

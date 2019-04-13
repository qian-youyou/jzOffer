class Solution {
public:
    int quick_pow(int n){
        int ans = 2, res = 1;
        while(n){
            if(n & 1){
                res *= ans;
            }
            ans *= ans;
            n >>= 1;
        }
        return res;
    }
    int jumpFloorII(int number) {
        number = quick_pow(number - 1);
        return number;
    }
};

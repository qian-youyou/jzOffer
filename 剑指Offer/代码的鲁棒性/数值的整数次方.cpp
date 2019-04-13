class Solution {
public:
    double quick_pow(double base, int n){
        double ans = 1;
        while(n){
            if(n&1){
                ans *= base;
            }
            base*=base;
            n>>=1;
        }
        return ans;
    }
    double Power(double base, int exponent) {
        if(exponent >= 0){
            return quick_pow(base, exponent);
        }
        else{
            return pow(base, exponent);
        }
    }
};

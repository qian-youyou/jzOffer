class Solution {
public:
    int Sum_Solution(int n) {
        return fun(n);
    }
    int fun(int n){
        n && (n += fun(n-1));
        return n;
    }
};

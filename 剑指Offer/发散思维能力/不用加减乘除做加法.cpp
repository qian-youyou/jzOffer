class Solution {
public:
    int Add(int num1, int num2)
    {
        while(num2){
            int a1 = num1 ^ num2;
            int a2 = num1 & num2;
            a2 <<= 1;
            num1 = a1;
            num2 = a2;
        }
        return num1;
    }
};

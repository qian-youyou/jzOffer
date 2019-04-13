class Solution {
public:
    static bool cmp(int a, int b){
        string str1 = to_string(a);
        string str2 = to_string(b);
        return str1 + str2 < str2 + str1;
    }
    string PrintMinNumber(vector<int> numbers) {
        int tmp;
        string str;
        int len = numbers.size();
        sort(numbers.begin(), numbers.end(), cmp);
        for(int i = 0; i < len; ++i){
            while(numbers[i] == 0){
                continue;
            }
            str += to_string(numbers[i]);
        }
        return str;
    }
};

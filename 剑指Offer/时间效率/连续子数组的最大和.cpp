class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int len = array.size();
        int ans = array[0];
        for(int i = 1; i < len; ++i){
            array[i] = max(array[i], array[i] + array[i - 1]);
            ans = max(ans, array[i]);
        }
        return ans;
    }
};

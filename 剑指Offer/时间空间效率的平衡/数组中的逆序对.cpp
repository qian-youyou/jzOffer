class Solution {
public:
    const long long mod = 1e9 + 7;
    int my_merge(vector<int> &data, int left, int mindle, int right){
        vector<int>A(mindle - left + 1);
        vector<int>B(right - mindle);
        long long ans = 0;
        for(int i = left; i <= mindle; ++i){
            A[i - left] = data[i];
        }
        for(int i = mindle + 1; i <= right; ++i){
            B[i - mindle - 1] = data[i];
        }
        int x = 0, y = 0;
        for(int i = left; i <= right; ++i){
            if(x >= A.size()){
                data[i] = B[y++];
            }else if(y >= B.size()){
                data[i] = A[x++];
            }else{
                if(A[x] > B[y]){
                    data[i] = B[y++];
                    ans += A.size() - x;
                }else{
                    data[i] = A[x++];
                }
            }
        }
        ans %= mod;
        return ans;
    }
    int mergeSort(vector<int>&data, int left, int right){
        long long ans = 0;
        if(left < right){
            int mindle = (left + right) / 2;
            ans += mergeSort(data, left, mindle);
            ans += mergeSort(data, mindle + 1, right);
            ans += my_merge(data, left, mindle, right);
        }
        ans %= mod;
        return ans;
    }
    int InversePairs(vector<int> data) {
        int ans = mergeSort(data, 0, data.size() - 1);
        return ans;
    }
};

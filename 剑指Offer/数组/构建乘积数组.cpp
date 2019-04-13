class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int>B(A.size(), 1);
        int tmp = 1;
        for(int i = 0; i < A.size() - 1; ++i){
            tmp *= A[i];
            B[i + 1] *= tmp;
        }
        tmp = 1;
        for(int i = A.size() - 1; i > 0; --i){
            tmp *= A[i];
            B[i - 1] *= tmp;
        }
        return B;
    }
};

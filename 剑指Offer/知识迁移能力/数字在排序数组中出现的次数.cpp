class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int cnt = 0;
        for(int i = 0; i < data.size(); ++i){
            if(data[i] == k){
                ++cnt;
            }
        }
        return cnt;
    }
};

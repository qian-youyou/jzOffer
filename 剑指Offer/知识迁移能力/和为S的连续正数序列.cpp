class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<int> v;
        vector<vector<int> >ans;
        for(int i = 1; i <= sum; ++i){
            v.push_back(i);
        }
        int left = 1, right = 1;
        int cnt = 1;
        while(right < sum && left < sum){
            if(cnt == sum){
                ans.push_back(vector<int>(v.begin() + left - 1, v.begin() + right));
            }
            if(cnt > sum){
                cnt -= left;
                ++left;
            }else if(cnt <= sum){
                ++right;
                cnt += right;
            }
        }
        return ans;
    }
};

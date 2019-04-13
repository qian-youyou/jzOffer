class Solution {
public:
    vector<string>v;
    void dfs(string str, int cur){
        if(cur < str.size() - 1){
            for(int i = cur; i < str.size(); ++i){
                if(i == cur || str[i] != str[cur]){
                    swap(str[cur], str[i]);
                    dfs(str, cur + 1);
                    swap(str[cur], str[i]);
                }
            }
        }else{
            v.push_back(str);
        }
    }
    vector<string> Permutation(string str) {
        dfs(str, 0);
        sort(v.begin(), v.end());
        return v;
    }
};

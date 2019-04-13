class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int>ans;
        const int len1 = matrix.size();
        if(!len1){
            return ans;
        }
        const int len2 = matrix[0].size();
        vector<bool>vis(len1*len2, false);
        int a[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        bool flag = true;
        int x = 0, y = 0;
        ans.push_back(matrix[x][y]);
        vis[0] = true;
        while(flag){
            flag = false;
            for(int i = 0; i < 4; ++i){
                while(x + a[i][0] >= 0 && x + a[i][0] < len1 && y + a[i][1] >= 0 && y + a[i][1] < len2 && !vis[(x + a[i][0]) * len2 + y + a[i][1]]){
                    flag = true;
                    x += a[i][0];
                    y += a[i][1];
                    ans.push_back(matrix[x][y]);
                    vis[x*len2 + y] = true;
                }
            }
        }
        return ans;
    }
};

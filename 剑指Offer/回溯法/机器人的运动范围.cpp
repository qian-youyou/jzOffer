class Solution {
public:
    int movingCount(int threshold, int rows, int cols){
        vis.resize(rows * cols, false);
        return dfs(threshold, rows, cols, 0, 0);
    }
private:
    int dfs(int threshold, int rows, int cols, int x, int y){
        if(x < 0 || y < 0 || x >= rows || y >= cols || vis[x * cols + y] || threshold < check(x) + check(y)){
            return 0;
        }
        vis[x * cols + y] = true;
        int ans = 1;
        for(int i = 0; i < 4; ++i){
            ans += dfs(threshold, rows, cols, x + road[i][0], y + road[i][1]);
        }
        return ans;
    }
    int check(int num){
        int res = 0;
        while(num){
            res += num % 10;
            num /= 10;
        }
        return res;
    }
    vector<bool>vis;
    int road[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
};

class Solution {
public:
    bool dfs(char* matrix, int x, int y, char* str, int cur, int rows, int cols){
        if(x < 0 || y < 0 || x >= rows || y >= cols || vis[x * cols + y] == true || str[cur] != matrix[x * cols + y]){
            return false;
        }
        vis[x * cols + y] = true;
        if(cur >= len - 1){
            return true;
        }
        for(int i = 0; i < 4; ++i){
            if(dfs(matrix, x + road[i][0], y + road[i][1], str, cur + 1, rows, cols) == true){
                return true;
            }
        }
        vis[x * cols + y] = false;
        return false;
    }
    bool hasPath(char* matrix, int rows, int cols, char* str){
        if(matrix[0] == 0){
            return false;
        }
        len = strlen(str);
        vis.resize(cols * rows, false);
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                if(matrix[i* cols + j] == str[0]){
                    if(dfs(matrix, i, j, str, 0, rows, cols) == true){
                        return true;
                    }
                }
            }
        }
        return false;
    }
private:
    int len;
    vector<bool>vis;
    int road[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
};

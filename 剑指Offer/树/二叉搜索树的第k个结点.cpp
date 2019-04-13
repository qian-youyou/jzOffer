/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    int cnt;
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        cnt = 0;
        return dfs(pRoot, k);
    }
    TreeNode* dfs(TreeNode* pRoot, int k){
        if(pRoot == NULL){
            return NULL;
        }
        if(pRoot->left){
            TreeNode* tmp = dfs(pRoot->left, k);
            if(tmp){
                return tmp;
            }
        }
        ++cnt;
        if(cnt == k){
            return pRoot;
        }
        if(pRoot->right){
            TreeNode* tmp = dfs(pRoot->right, k);
            if(tmp){
                return tmp;
            }
        }
        return NULL;
    }
};

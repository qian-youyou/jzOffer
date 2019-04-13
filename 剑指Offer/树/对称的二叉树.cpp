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
    bool check(TreeNode* pRoot_1, TreeNode* pRoot_2){
        return pRoot_1->val == pRoot_2->val;
    }
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(pRoot == NULL){
            return true;
        }
        return dfs(pRoot->left, pRoot->right);
    }
    bool dfs(TreeNode* pRoot_1, TreeNode* pRoot_2){
        if(pRoot_1 == NULL || pRoot_2 == NULL){
            if(pRoot_1 == NULL && pRoot_2 == NULL){
                return true;
            }
            return false;
        }
        if(check(pRoot_1, pRoot_2)){
            if(dfs(pRoot_1->left, pRoot_2->right)){
                return dfs(pRoot_1->right, pRoot_2->left);
            }
        }
        return false;
    }
};

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool dfs(TreeNode* pRoot1, TreeNode* pRoot2){
        if(pRoot1 == NULL || pRoot2 == NULL){
            if(pRoot2 == NULL){
                return true;
            }else{
                return false;
            }
        }
        if(pRoot1->val == pRoot2->val){
            if(dfs(pRoot1->left, pRoot2->left)){
                if(dfs(pRoot1->right, pRoot2->right)){
                    return true;
                }
            }
        }
        return false;
    }
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot1 == NULL || pRoot2 == NULL){
            return false;
        }
        if(pRoot1->val == pRoot2->val){
            if(dfs(pRoot1, pRoot2)){
                return true;
            }
        }
        bool flag = HasSubtree(pRoot1->left, pRoot2)||HasSubtree(pRoot1->right, pRoot2);
        return flag;
    }
};

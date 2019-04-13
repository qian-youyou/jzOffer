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
    TreeNode* Convert(TreeNode* pRootOfTree){
        if(pRootOfTree){
            TreeNode* left = Convert(pRootOfTree->left);
            TreeNode* right = Convert(pRootOfTree->right);
            TreeNode* tail = left;
            if(right){
                right->left = pRootOfTree;
                pRootOfTree->right = right;
            }
            if(left){
                while(tail->right){
                    tail = tail->right;
                }
                tail->right = pRootOfTree;
                pRootOfTree->left = tail;
                return left;
            }
            return pRootOfTree;
        }
        return NULL;
    }
};

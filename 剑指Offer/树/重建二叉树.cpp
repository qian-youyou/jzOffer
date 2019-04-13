/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size() == 0 || vin.size() == 0){
            return NULL;
        }
        TreeNode* T;
        int index = 0;
        buildTree(T, pre, vin, 0, 0, pre.size(), index);
        return T;
    }
    void buildTree(TreeNode* &T, vector<int> pre,vector<int> vin, int cur, int left, int right, int &index){
        T = new TreeNode(pre[cur]);
        ++index;
        int i;
        for(i = left; i < right; i++){
            if(vin[i] == pre[cur]){
                break;
            }
        }
        if(i > left && i < right){
            buildTree(T->left, pre, vin, cur + 1, left, i, index);
        }
        if(i < right - 1){
            buildTree(T->right, pre, vin, index, i + 1, right, index);
        }
    }
};

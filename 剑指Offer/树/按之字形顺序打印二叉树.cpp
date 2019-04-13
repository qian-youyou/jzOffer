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
    vector<vector<int> > Print(TreeNode* pRoot) {
        stack<TreeNode*>que;
        stack<TreeNode*>stk;
        vector<vector<int> >vv;
        if(!pRoot){
            return vv;
        }
        que.push(pRoot);
        while(!que.empty() || !stk.empty()){
            vector<int>v;
            if(!que.empty()){
                while(!que.empty()){
                    TreeNode* tmp = que.top();
                    que.pop();
                    v.push_back(tmp->val);
                    if(tmp->left){
                        stk.push(tmp->left);
                    }
                    if(tmp->right){
                        stk.push(tmp->right);
                    }
                }
            }
            else{
                while(!stk.empty()){
                    TreeNode* tmp = stk.top();
                    stk.pop();
                    v.push_back(tmp->val);
                    if(tmp->right){
                        que.push(tmp->right);
                    }
                    if(tmp->left){
                        que.push(tmp->left);
                    }
                }
            }
            vv.push_back(v);
        }
        return vv;
    }

};

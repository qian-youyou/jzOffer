/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode == NULL){
            return pNode;
        }
        if(pNode->right){
            TreeLinkNode* p = pNode->right;
            while(p->left){
                p = p->left;
            }
            return p;
        }
        else{
            TreeLinkNode* p = pNode->next;
            while(p && p->right == pNode){
                pNode = p;
                p = p->next;
            }
            return p;
        }
        return NULL;
    }
};

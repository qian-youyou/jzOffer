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
    char* Serialize(TreeNode *root) {
        string str;
        if(root){
            str = to_string(root->val);
            str = str + "," + Serialize(root->left);
            str = str + "," + Serialize(root->right);
        }else{
            str = "#";
        }
        char* ret = new char[str.size()];
        strcpy(ret,str.c_str());
        return ret;
    }
    TreeNode* dfs(char * &str) {
        if(*str == ','){
            ++str;
        }
        if(str){
            TreeNode* Tree = new TreeNode(0);
            if(str && *str >= '0' && *str <= '9'){
                while(*str >= '0' && *str <= '9'){
                    Tree->val *= 10;
                    Tree->val += *str - '0';
                    ++str;
                }
                Tree->left = dfs(str);
                Tree->right = dfs(str);
                return Tree;
            }else if(*str == '#'){
                ++str;
                return NULL;
            }
        }
        return NULL;
    }
    TreeNode* Deserialize(char * str){
        return dfs(str);
    }
};

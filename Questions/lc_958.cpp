#pragma GCC optimize('O3')
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        bool flag = false;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp == nullptr){
                flag = true;
            }else{
                if(flag){
                    return false;
                }
                q.push(temp->left);
                q.push(temp->right);
            }
        }

        return true;
    }
};
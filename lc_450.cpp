#pragma GCC optimize('Ofast')
class Solution {
public:
    TreeNode* findmin(TreeNode* root){
        while(root->left) root=root->left;
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;
        if(key<root->val) root->left=deleteNode(root->left,key);
        else if(key>root->val) root->right=deleteNode(root->right,key);
        else{
            if(root->left==NULL){
                TreeNode* temp =root->right;
                delete root;
                return temp;
            }
            else if (root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            TreeNode* temp=findmin(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);

        }
        return root;
    }
};